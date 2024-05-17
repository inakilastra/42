/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilastra- <ilastra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:41:29 by ilastra-          #+#    #+#             */
/*   Updated: 2024/05/16 09:37:47 by ilastra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptrs;

	if (n > 1)
	{
		ptrs = (char *)s;
		while (n--)
			*ptrs++ = 0;
	}
}

/** MAIN CON ARGUMENTOS * /
int	main(int argc, char **argv)
{
	char	*s;
	char	*s1;
	size_t	n;

	if (argc != 3)
	{
		printf("Error en el número de argumentos\n");
		return (0);
	}
	s = argv[1];
	s1 = argv[1];
	n = ft_atoi(argv[2]);
	ft_bzero(s, n);
	printf("ft_bzero %s\n", s);
	bzero(s1, n);
	printf("bzero    %s\n", s1);
	return (0);
}*/

/** TEORIA RESUMEN
void bzero(void *s, size_t n);
La función bzero se utiliza para rellenar una zona de memoria con 
bytes nulos ('\0'). En otras palabras, toma un bloque de memoria y escribe 
un valor de 0 en cada ubicación dentro de ese bloque.
*/

/** EXPLICACION CODIGO
#include "libft.h"			//	Es necesario para size_t "unistd.h"

void	ft_bzero(void *s, size_t n)
{
	// Rellenar el buffer con bytes nulos
	// Uso ft_memset y asigno 0 que es Nulo
	ft_memset(s, 0, n);
	char	*ptrs;			//	Inicio puntero

	if (n > 1)				//	Si "n" es 0 o menos
	{
		ptrs = (char *)s;	//	Asigno puntero "s" a "ptrs"
		while (n--)			//	Recorro el numero de "n"
			*ptrs++ = 0;	//	Asigno "0" a cada posición y me muevo next
	}	
}
*/