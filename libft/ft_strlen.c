/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilastra- <ilastra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:42:57 by ilastra-          #+#    #+#             */
/*   Updated: 2024/04/25 12:49:27 by ilastra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * TEORIA RESUMEN
size_t strlen(const char *s);
La función strlen calcula la longitud de una cadena de caracteres.
La función es útil para determinar el tamaño de una cadena y para realizar 
operaciones con cadenas.
La función no modifica la cadena original.
*/

/**
 * EXPLICACION CODIGO
#include "libft.h"			//	Es necesario para size_t "unistd.h"
size_t	ft_strlen(const char *s)
{
	size_t	i;						//	Inicio un contador

	i = 0;							//	Le asigo valor 0
	if (!s)							//	Si "s" es Nulo
		return (0);					//	Devuelvo 0
	while (s[i] != '\0')			//	Recorro el puntero str
		i++;						//	Aumento el valor del contador
	return (i);						//	Devuelvo el valor del contador
}
*/

/**
 * MAIN CON ARGUMENTOS
#include "libft.h"
#include <ctype.h>

int	main(int argc, char **argv)
{
	size_t	i;
	char	*s;

	if (argc != 2)
	{
		printf("Error en el número de argumentos\n");
		return (0);
	}
	s = argv[1];
	i = ft_strlen(s);
	if (i == 1)
		printf("Size of %s --> %zu\n", s, i);
	else
		printf("Size of %s --> %zu\n", s, i);
	i = strlen(s);
	printf("Size of %s --> %zu\n", s, i);
	return (0);
}
*/
