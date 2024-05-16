/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilastra- <ilastra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:03:59 by ilastra-          #+#    #+#             */
/*   Updated: 2024/04/26 12:29:17 by ilastra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*ptrdst;
	char	*ptrsrc;

	if (!dst && !src)
		return (0);
	ptrdst = (char *)dst;
	ptrsrc = (char *)src;
	while (n--)
		*ptrdst++ = *ptrsrc++;
	return (dst);
}

/**
 * TEORIA
void *memcpy(void *restrict dst, const void *restrict src, size_t n);
La función memcpy se utiliza para copiar un bloque de memoria de una 
ubicación a otra. En otras palabras, toma dos punteros a zonas de memoria y 
copia el contenido de una zona a la otra.
*/

/**
 * EXPLICACION
 #include "libft.h"					//	Es necesario para size_t "unistd.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*ptrdst;				//	Inicio un puntero a dst
	char	*ptrsrc;				//	Inicio un puntero a src

	if (!dst && !src)				//	Si dst o src no existen o son nulos
		return (0);					//	Devuelvo un 0
	ptrdst = (char *)dst;			//	Asigno al puntero prtdst el *dst
	ptrsrc = (char *)src;			//	Asigno al puntero prtsrc el *src
	while (n--)						//	Recorro hasta n = 0
		*ptrdst++ = *ptrsrc++;		//	Asigno origen a destino
	return (dst);					//	Devuelvo destino
}
*/

/**
 * MAIN CON ARGUMENTOS
#include "libft.h"
#include <string.h>

int	main(int argc, char **argv)
{
	void	*dst;
	void	*dst1;
	void	*src;
	size_t	n;

	if (argc != 4)
	{
		printf("Error en el número de argumentos\n");
		return (0);
	}
	dst = argv[1];
	dst1 = argv[1];
	src = argv[2];
	n = ft_atoi(argv[3]);
	fn_memcpy(dst, src, n);
	printf("fn_memcpy %s\n", dst);
	memcpy(dst1, src, n);
	printf("memcpy    %s\n", dst1);
	return (0);
}
*/
