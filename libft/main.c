/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilastra- <ilastra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:48:02 by ilastra-          #+#    #+#             */
/*   Updated: 2024/05/15 13:09:57 by ilastra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return ((c >= 48 && c <= 57));
}

int	main(int argc, char **argv)
{
	int		i;
	char	c;

	if (argc != 2)
	{
		printf("Error en el número de argumentos\n");
		return (0);
	}
	c = argv[1][0];
	i = isdigit(c);
	printf("isdigit(\"%c\") --> %d\n", c, i);
	i = ft_isdigit(c);
	if (i == 1)
		printf("\"%c\" es un dígito decimal (entre 0 y 9) %d\n", c, i);
	else
		printf("\"%c\" no es un dígito decimal (entre 0 y 9)\n", c);
	i = 0;
	i = isdigit(c);
	printf("isdigit(\"%c\") --> %d\n", c, i);
	return (0);
}
