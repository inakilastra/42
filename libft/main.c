/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilastra- <ilastra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:48:02 by ilastra-          #+#    #+#             */
/*   Updated: 2024/05/24 11:28:00 by ilastra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define DEF_COLOR "\033[0;39m"
#define GRAY "\033[0;90m"
#define RED "\033[0;91m"
#define GREEN "\033[0;92m"
#define YELLOW "\033[0;93m"
#define BLUE "\033[0;94m"
#define MAGENTA "\033[0;95m"
#define CYAN "\033[0;96m"
#define WHITE "\033[0;97m"

const char* get_color(int value) {
    switch (value) {
        case 0:
            return GRAY;
        case 1:
            return RED;
        case 2:
            return GREEN;
        case 3:
            return YELLOW;
        case 4:
            return BLUE;
        case 5:
            return MAGENTA;
        case 6:
            return CYAN;
        case 7:
            return WHITE;												
        default:
            return DEF_COLOR;
    }
}

int check_norminette(const char *filename) {
    char buffer[128];
    FILE *pipe;
    int error_count = 0;
	const char *color;
	
    // Ejecuta norminette y abre una tubería para leer su salida
    char command[256];
    snprintf(command, sizeof(command), "norminette %s", filename);
    pipe = popen(command, "r");
    if (!pipe) {
        fprintf(stderr, "Error al ejecutar norminette.\n");
        return -1;
    }
	color = get_color(7);
    // Lee la salida de norminette línea por línea
    while (fgets(buffer, sizeof(buffer), pipe) != NULL) {
        printf("%s%s", color, buffer); // Imprime la salida de norminette para depuración

        // Cuenta los errores (esto es una simplificación; deberías ajustar esto según la salida real de norminette)
        if (strstr(buffer, "Error") != NULL) {
            error_count++;
        }
    }

    // Cierra la tubería
    if (pclose(pipe) == -1) {
        fprintf(stderr, "Error al cerrar la tubería.\n");
        return -1;
    }

    return error_count;
}

void	fn_isalpha(char	*c)
{
	int			i;
	int 		result;
	const char *color;

	i = 1;
	if (ft_isalpha('A') == 1 && ft_isalpha('Z') == 1 
		&& ft_isalpha('a') == 1 && ft_isalpha('z') == 1 
		&& ft_isalpha('0') == 0)
		i = 2;
	color = get_color(i);
	printf("%s\n****************************** ft_isalpha vs isalpha\n", WHITE);
	printf("%s\t%s Tu resultado tiene que ser 0 ó 1\n", color, c);
	printf("%sDe la 'A' a la 'Z' %d-%d\n", color, ft_isalpha('A'), ft_isalpha('Z'));	
	printf("%sDe la 'a' a la 'z' %d-%d\n", color, ft_isalpha('a'), ft_isalpha('z'));
	printf("%sCaracter '0' %d\n", color, ft_isalpha('0'));	
	printf("%s\tSe esperaba 0 o mayor que 0 (1024)\n", color);
	printf("%sDe la 'A' a la 'Z' %d-%d\n", color, isalpha('A'), isalpha('Z'));	
	printf("%sDe la 'a' a la 'z' %d-%d\n", color, isalpha('a'), isalpha('z'));
	printf("%sCaracter '0' %d\n", color, isalpha('0'));
	printf("%s******************************************************\n", color);
	color = get_color(7);
    result = check_norminette("ft_isalpha.c");
    if (result == -1)
	{
        color = get_color(1);
		printf("%sHubo un error al ejecutar norminette. ft_isalpha.c\n", color);
    }else
	{
        color = get_color(7);
		printf("%sNúmero de errores de norminette: %d\n", color, result);
    }	
	printf("%s******************************************************\n", color);	
}

void	fn_isdigit(char	*c)
{
	int			i;
	int 		result;
	const char *color;
	
	i = 1;
	if (ft_isdigit('0') == 1 && ft_isdigit('9') == 1 && ft_isdigit('X') == 0)
		i = 2;
	color = get_color(i);
	printf("%s\n****************************** ft_isalpha vs isalpha\n", WHITE);
	printf("%s\t%s Tu resultado tiene que ser 0 ó 1\n", color, c);
	printf("%sDel 0 al 9 %d-%d\n", color, ft_isdigit('0'), ft_isdigit('9'));	
	printf("%sCaracter 'X' %d\n", color, ft_isdigit('X'));	
	printf("%s\tSe esperaba 0 o mayor que 0 (2048)\n", color);
	printf("%sDel 0 al 9 %d-%d\n", color, isdigit('0'), isdigit('9'));	
	printf("%sCaracter 'X' %d\n", color, isdigit('X'));	;
	printf("%s******************************************************\n", color);
	color = get_color(7);
    result = check_norminette("ft_isdigit.c");
    if (result == -1)
	{
        color = get_color(1);
		printf("%sHubo un error al ejecutar norminette. ft_isdigit.c\n", color);
    }else
	{
        color = get_color(7);
		printf("%sNúmero de errores de norminette: %d\n", color, result);
    }	
	printf("%s******************************************************\n", color);			
}

void	fn_isalnum(char	*c)
{
	int			i;
	int 		result;
	const char *color;
	
	i = 1;
	if (ft_isalpha('A') == 1 && ft_isalpha('Z') == 1 
		&& ft_isalpha('a') == 1 && ft_isalpha('z') == 1 
		&& ft_isalnum('0') == 1 && ft_isalnum('9') == 1
		&& ft_isalnum('+') == 0)
		i = 2;
	color = get_color(i);
	printf("%s\n****************************** ft_isalnum vs isalnum\n", WHITE);
	printf("%s\t%s Tu resultado tiene que ser 0 ó 1\n", color, c);
	printf("%sDe la 'A' a la 'Z' %d-%d\n", color, ft_isalnum('A'), ft_isalnum('Z'));	
	printf("%sDe la 'a' a la 'z' %d-%d\n", color, ft_isalnum('a'), ft_isalnum('z'));	
	printf("%sDel 0 al 9 %d-%d\n", color, ft_isalnum('0'), ft_isalnum('9'));	
	printf("%sCaracter '+' %d\n", color, ft_isalnum('+'));	
	printf("%s\tSe esperaba 0 o mayor que 0 (8)\n", color);
	printf("%sDe la 'A' a la 'Z' %d-%d\n", color, isalnum('A'), isalnum('Z'));	
	printf("%sDe la 'a' a la 'z' %d-%d\n", color, isalnum('a'), isalnum('z'));	
	printf("%sDel 0 al 9 %d-%d\n", color, isalnum('0'), isalnum('9'));	
	printf("%sCaracter '+' %d\n", color, isalnum('+'));
	printf("%s******************************************************\n", color);	
	color = get_color(7);
    result = check_norminette("ft_isalnum.c");
    if (result == -1)
	{
        color = get_color(1);
		printf("%sHubo un error al ejecutar norminette. ft_isalnum.c\n", color);
    }else
	{
        color = get_color(7);
		printf("%sNúmero de errores de norminette: %d\n", color, result);
    }	
	printf("%s******************************************************\n", color);		
}

int	main(int argc, char **argv)
{
	char		*c;
	const char *color;
	
	if (argc != 2)
	{
		printf("\033[0;91m\nError en el número de argumentos\n");
		printf("\033[0;92mPrueba con: ./main \"Tu Nombre\"\n\n");
		return (0);
	}
	color = get_color(6);
	printf("\033[H\033[J");
	printf("%s******************************************************\n", color);
	printf("%s******************************************************\n", color);
	printf("%s******************************************************\n", color);
	c = argv[1];
	fn_isalnum(c);
	fn_isdigit(c);
	fn_isalpha(c);
	printf("%s\n\tHola %s revisa hacia arriba los resultados\n\n", color, c);
	return (0);
}
