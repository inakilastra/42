/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilastra- <ilastra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 09:12:03 by ilastra-          #+#    #+#             */
/*   Updated: 2024/05/28 09:18:26 by ilastra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <stdlib.h>
#include <unistd.h>

char    *get_next_line(int fd);
size_t  fn_strlen(const char *s);
char    *fn_strjoin(char const *s1, char const *s2);
char    *fn_strchr(const char *s, int c);
char    *fn_strdup(const char *s1);

#endif