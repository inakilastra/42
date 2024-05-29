/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mynormintte.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaki <inaki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 23:01:02 by inaki             #+#    #+#             */
/*   Updated: 2024/05/29 23:19:22 by inaki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <fcntl.h>

#define DEF_COLOR "\033[0;39m"
#define GRAY "\033[0;90m"
#define RED "\033[0;91m"
#define GREEN "\033[0;92m"
#define YELLOW "\033[0;93m"
#define BLUE "\033[0;94m"
#define MAGENTA "\033[0;95m"
#define CYAN "\033[0;96m"
#define WHITE "\033[0;97m"

const char	*get_color2(int value)
{
	switch (value)
	{
		case 0:
			return (GRAY);
		case 1:
			return (RED);
		case 2:
			return (GREEN);
		case 3:
			return (YELLOW);
		case 4:
			return (BLUE);
		case 5:
			return (MAGENTA);
		case 6:
			return (CYAN);
		case 7:
			return (WHITE);												
		default:
			return (DEF_COLOR);
	}
}

int	check_norminette(const char *filename)
{
	char		buffer[128];
	FILE		*pipe;
	int			error_count;
	char		command[256];

	error_count = 0;
	snprintf(command, sizeof(command), "norminette %s", filename);
	pipe = popen(command, "r");
	if (!pipe)
	{
		fprintf(stderr, "Error al ejecutar norminette.\n");
		return (-1);
	}
	while (fgets(buffer, sizeof(buffer), pipe) != NULL)
	{
		if (strstr(buffer, ".c: OK!") != NULL)
			printf("%s%s", GREEN, buffer);
		else
			printf("%s%s", RED, buffer);
		if (strstr(buffer, "Error") != NULL)
			error_count++;
	}
	if (pclose(pipe) == -1) 
	{
		fprintf(stderr, "Error al cerrar la tubería.\n");
		return (-1);
	}
	if (error_count > 1)
		error_count--;
	return (error_count);
}

/**
 * Ejecuta norminette y abre una tubería para leer su salida
 * int	check_norminette(const char *filename)
 * Lee la salida de norminette línea por línea
 * Imprime la salida de norminette para depuración
 * Cuenta los errores (esto es una simplificación; deberías ajustar esto 
   según la salida real de norminette)
 * Cierra la tubería
*/

int mynorminette(char bonus)
{
    int         norminette;
    int         result;
    const char 	*color;

    printf("%s\n*********************NORMINETTE***********************\n", WHITE);
	norminette = 0;
	if (bonus == 's')
	{
//ft_lstmap_bonus.c
		result = check_norminette("ft_lstmap_bonus.c");
		if (result == -1)
			printf("%sHubo un error al ejecutar norminette. ft_lstmap_bonus.c\n", RED);
		else
			norminette = norminette + result;
//ft_lstiter_bonus.c
		result = check_norminette("ft_lstiter_bonus.c");
		if (result == -1)
			printf("%sHubo un error al ejecutar norminette. ft_lstiter_bonus.c\n", RED);
		else
			norminette = norminette + result;
//ft_lstclear_bonus.c
		result = check_norminette("ft_lstclear_bonus.c");
		if (result == -1)
			printf("%sHubo un error al ejecutar norminette. ft_lstclear_bonus.c\n", RED);
		else
			norminette = norminette + result;
//ft_lstdelone_bonus.c
		result = check_norminette("ft_lstdelone_bonus.c");
		if (result == -1)
			printf("%sHubo un error al ejecutar norminette. ft_lstdelone_bonus.c\n", RED);
		else
			norminette = norminette + result;
//ft_lstadd_back_bonus.c
		result = check_norminette("ft_lstadd_back_bonus.c");
		if (result == -1)
			printf("%sHubo un error al ejecutar norminette. ft_lstadd_back_bonus.c\n", RED);
		else
			norminette = norminette + result;
//ft_lstlast_bonus.c
		result = check_norminette("ft_lstlast_bonus.c");
		if (result == -1)
			printf("%sHubo un error al ejecutar norminette. ft_lstlast_bonus.c\n", RED);
		else
			norminette = norminette + result;
//ft_lstsize_bonus.c
		result = check_norminette("ft_lstsize_bonus.c");
		if (result == -1)
			printf("%sHubo un error al ejecutar norminette. ft_lstsize_bonus.c\n", RED);
		else
			norminette = norminette + result;
//ft_lstadd_front_bonus.c
		result = check_norminette("ft_lstadd_front_bonus.c");
		if (result == -1)
			printf("%sHubo un error al ejecutar norminette. ft_lstadd_front_bonus.c\n", RED);
		else
			norminette = norminette + result;
//ft_lstnew_bonus.c
		result = check_norminette("ft_lstnew_bonus.c");
		if (result == -1)
			printf("%sHubo un error al ejecutar norminette. ft_lstnew_bonus.c\n", RED);
		else
			norminette = norminette + result;
	}
//ft_putnbr_fd.c
	result = check_norminette("ft_putnbr_fd.c");
	if (result == -1)
		printf("%sHubo un error al ejecutar norminette. ft_putnbr_fd.c\n", RED);
	else
		norminette = norminette + result;
//ft_putendl_fd.c
	result = check_norminette("ft_putendl_fd.c");
	if (result == -1)
		printf("%sHubo un error al ejecutar norminette. ft_putendl_fd.c\n", RED);
	else
		norminette = norminette + result;
//ft_putstr_fd.c
	result = check_norminette("ft_putstr_fd.c");
	if (result == -1)
		printf("%sHubo un error al ejecutar norminette. ft_putstr_fd.c\n", RED);
	else
		norminette = norminette + result;
//ft_putchar_fd.c
	result = check_norminette("ft_putchar_fd.c");
	if (result == -1)
		printf("%sHubo un error al ejecutar norminette. ft_putchar_fd.c\n", RED);
	else
		norminette = norminette + result;
//ft_striteri.c
	result = check_norminette("ft_striteri.c");
	if (result == -1)
		printf("%sHubo un error al ejecutar norminette. ft_striteri.c\n", RED);
	else
		norminette = norminette + result;
//ft_strmapi.c
	result = check_norminette("ft_strmapi.c");
	if (result == -1)
		printf("%sHubo un error al ejecutar norminette. ft_strmapi.c\n", RED);
	else
		norminette = norminette + result;
//ft_itoa.c
	result = check_norminette("ft_itoa.c");
	if (result == -1)
		printf("%sHubo un error al ejecutar norminette. ft_itoa.c\n", RED);
	else
		norminette = norminette + result;
//ft_split.c
	result = check_norminette("ft_split.c");
	if (result == -1)
		printf("%sHubo un error al ejecutar norminette. ft_split.c\n", RED);
	else
		norminette = norminette + result;
//ft_strtrim.c
	result = check_norminette("ft_strtrim.c");
	if (result == -1)
		printf("%sHubo un error al ejecutar norminette. ft_strtrim.c\n", RED);
	else
		norminette = norminette + result;
//ft_strjoin.c
	result = check_norminette("ft_strjoin.c");
	if (result == -1)
		printf("%sHubo un error al ejecutar norminette. ft_strjoin.c\n", RED);
	else
		norminette = norminette + result;
//ft_substr.c
	result = check_norminette("ft_substr.c");
	if (result == -1)
		printf("%sHubo un error al ejecutar norminette. ft_substr.c\n", RED);
	else
		norminette = norminette + result;
//ft_strdup.c
	result = check_norminette("ft_strdup.c");
	if (result == -1)
		printf("%sHubo un error al ejecutar norminette. ft_strdup.c\n", RED);
	else
		norminette = norminette + result;
//ft_calloc.c
	result = check_norminette("ft_calloc.c");
	if (result == -1)
		printf("%sHubo un error al ejecutar norminette. ft_calloc.c\n", RED);
	else
		norminette = norminette + result;
//ft_atoi.c
	result = check_norminette("ft_atoi.c");
	if (result == -1)
		printf("%sHubo un error al ejecutar norminette. ft_atoi.c\n", RED);
	else
		norminette = norminette + result;
//ft_strnstr.c
	result = check_norminette("ft_strnstr.c");
	if (result == -1)
		printf("%sHubo un error al ejecutar norminette. ft_strnstr.c\n", RED);
	else
		norminette = norminette + result;
//ft_memcmp.c
	result = check_norminette("ft_memcmp.c");
	if (result == -1)
		printf("%sHubo un error al ejecutar norminette. ft_memcmp.c\n", RED);
	else
		norminette = norminette + result;
//ft_memchr.c
	result = check_norminette("ft_memchr.c");
	if (result == -1)
		printf("%sHubo un error al ejecutar norminette. ft_memchr.c\n", RED);
	else
		norminette = norminette + result;
//ft_strncmp.c
	result = check_norminette("ft_strncmp.c");
	if (result == -1)
		printf("%sHubo un error al ejecutar norminette. ft_strncmp.c\n", RED);
	else
		norminette = norminette + result;
//ft_strrchr.c
	result = check_norminette("ft_strrchr.c");
	if (result == -1)
		printf("%sHubo un error al ejecutar norminette. ft_strrchr.c\n", RED);
	else
		norminette = norminette + result;
//ft_strchr.c
	result = check_norminette("ft_strchr.c");
	if (result == -1)
		printf("%sHubo un error al ejecutar norminette. ft_strchr.c\n", RED);
	else
		norminette = norminette + result;
//ft_tolower.c
	result = check_norminette("ft_tolower.c");
	if (result == -1)
		printf("%sHubo un error al ejecutar norminette. ft_tolower.c\n", RED);
	else
		norminette = norminette + result;
//ft_toupper.c
	result = check_norminette("ft_toupper.c");
	if (result == -1)
		printf("%sHubo un error al ejecutar norminette. ft_toupper.c\n", RED);
	else
		norminette = norminette + result;
//ft_strlcat.c
	result = check_norminette("ft_strlcat.c");
	if (result == -1)
		printf("%sHubo un error al ejecutar norminette. ft_strlcat.c\n", RED);
	else
		norminette = norminette + result;
//ft_strlcpy.c
	result = check_norminette("ft_strlcpy.c");
	if (result == -1)
		printf("%sHubo un error al ejecutar norminette. ft_strlcpy.c\n", RED);
	else
		norminette = norminette + result;
//ft_memmove.c
	result = check_norminette("ft_memmove.c");
	if (result == -1)
		printf("%sHubo un error al ejecutar norminette. ft_memmove.c\n", RED);
	else
		norminette = norminette + result;
//ft_memcpy.c
	result = check_norminette("ft_memcpy.c");
	if (result == -1)
		printf("%sHubo un error al ejecutar norminette. ft_memcpy.c\n", RED);
	else
		norminette = norminette + result;
//ft_bzero
	result = check_norminette("ft_bzero.c");
	if (result == -1)
		printf("%sHubo un error al ejecutar norminette. ft_bzero.c\n", RED);
	else
		norminette = norminette + result;
//ft_memset		
	result = check_norminette("ft_memset.c");
	if (result == -1)
		printf("%sHubo un error al ejecutar norminette. ft_memset.c\n", RED);
	else
		norminette = norminette + result;
//ft_strlen		
	result = check_norminette("ft_strlen.c");
	if (result == -1)
		printf("%sHubo un error al ejecutar norminette. ft_strlen.c\n", RED);
	else
		norminette = norminette + result;
//ft_isprint		
	result = check_norminette("ft_isprint.c");
	if (result == -1)
		printf("%sHubo un error al ejecutar norminette. ft_isprint.c\n", RED);
	else
		norminette = norminette + result;	
//ft_isascii	
	result = check_norminette("ft_isascii.c");
	if (result == -1)
		printf("%sHubo un error al ejecutar norminette. ft_isascii.c\n", RED);
	else
		norminette = norminette + result;
//ft_isalnum		
	result = check_norminette("ft_isalnum.c");
	if (result == -1)
		printf("%sHubo un error al ejecutar norminette. ft_isalnum.c\n", RED);
	else
		norminette = norminette + result;
//ft_isdigit				
	result = check_norminette("ft_isdigit.c");
	if (result == -1)
		printf("%sHubo un error al ejecutar norminette. ft_isdigit.c\n", RED);
	else
		norminette = norminette + result;
//fn_isalpha(c);		
    result = check_norminette("ft_isalpha.c");
	if (result == -1)
		printf("%sHubo un error al ejecutar norminette. ft_isalpha.c\n", RED);
	else
		norminette = norminette + result;
			
	if (norminette == 0)
        color = get_color2(2);
	else
        color = get_color2(1);
	if (norminette == 0)
		printf("%s\tNorminette: OK!\n", color);
	else
		printf("%sErrores Norminette: %d\n", color, norminette);
	printf("%s******************************************************\n", color);
    return (0);
}