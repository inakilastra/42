/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilastra- <ilastra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:23:00 by ilastra-          #+#    #+#             */
/*   Updated: 2024/05/09 11:31:50 by ilastra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*d1;
	char	*d2;

	if (n == 0)
		return (0);
	i = 0;
	d1 = (char *)s1;
	d2 = (char *)s2;
	while (n--)
	{
		if (*(unsigned char *)(d1 + i) != *(unsigned char *)(d2 + i))
			return (*(unsigned char *)(d1 + i) - *(unsigned char *)(d2 + i));
		i++;
	}
	return (0);
}

/**
 * TEORIA
int memcmp(const void *s1, const void *s2, size_t n);
La función memcmp se utiliza para comparar dos bloques de memoria. En otras 
palabras, toma dos punteros a zonas de memoria y determina si el contenido 
de esas zonas es idéntico o no.
*/

/**
 * EXPLICACION
#include "libft.h"						//	Es necesario para size_t "unistd.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;							//	Inicializo un contador
	char	*d1;						//	Inicializo puntero "d1"
	char	*d2;						//	Inicializo puntero "d2"

	if (n == 0)							//	Si "n" es igual a 0
		return (0);						//	Devuelvo 0
	i = 0;								//	Asigno 0 al contador
	d1 = (char *)s1;					//	Asigno a "d1" el puntero "s1"
	d2 = (char *)s2;					//	Asigno a "d2" el puntero "s2"
	while (n--)							//	Recorro n hasta 0
	{
		//	Si la posicion de los punteros "s1" y "s2" es diferente
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			//	Devuevo la diferencia entre ambos punteros
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;							//	Aumento el contador
	}
	return (0);							//	Devuelvo 0
}
*/

/*
 * COMPROBACION
int	main(void)
{
    char str1[] = "Hello";
    char str2[] = "World";
    int result;

    // Comparar los primeros 3 bytes de str1 y str2
    result = ft_memcmp(str1, str2, 3);

    if (result == 0)
        printf("Los primeros 3 bytes de str1 y str2 son iguales.\n");
    else if (result < 0)
        printf("Los primeros 3 bytes de str1 son menores que los de str2.\n");
    else
        printf("Los primeros 3 bytes de str1 son mayores que los de str2.\n");


	return (0);
}
*/
