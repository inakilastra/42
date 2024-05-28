/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilastra- <ilastra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 09:14:52 by ilastra-          #+#    #+#             */
/*   Updated: 2024/05/28 09:21:28 by ilastra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char *extract_line(char **save) {
    char *line;
    char *temp;
    char *newline_pos = gnl_strchr(*save, '\n');

    if (newline_pos) {
        *newline_pos = '\0';
        line = gnl_strdup(*save);
        temp = gnl_strdup(newline_pos + 1);
        free(*save);
        *save = temp;
        if (!**save) {
            free(*save);
            *save = NULL;
        }
    } else {
        line = gnl_strdup(*save);
        free(*save);
        *save = NULL;
    }
    return line;
}

char *get_next_line(int fd) {
    static char *save[1024];
    char buffer[BUFFER_SIZE + 1];
    char *temp;
    ssize_t bytes_read;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return NULL;
    while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0) {
        buffer[bytes_read] = '\0';
        if (!save[fd])
            save[fd] = gnl_strdup("");
        temp = gnl_strjoin(save[fd], buffer);
        save[fd] = temp;
        if (gnl_strchr(save[fd], '\n'))
            break;
    }
    if (bytes_read < 0 || (bytes_read == 0 && !save[fd]))
        return NULL;
    return extract_line(&save[fd]);
}
