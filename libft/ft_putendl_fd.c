/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilastra- <ilastra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:31:40 by ilastra-          #+#    #+#             */
/*   Updated: 2024/04/23 16:01:13 by ilastra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}

/**
Nombre de función
    ft_putendl_fd
Prototipo 
    void ft_putendl_fd(char *s, int fd);
Archivos a entregar
    -
Parámetros 
    s: La string a enviar.
    fd: El file descriptor sobre el que escribir.
Valor devuelto 
    Nada
Funciones autorizadas
    write
Descripción 
    Envía la string ’s’ al file descriptor dado, seguido de un salto de línea.
*/

/**
 * EXPLICACION
#include "libft.h"			//	Es necesario para size_t "unistd.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)                      //  Si "s" es nulo
	{
		//  Envía la string ’s’ al file descriptor especificado.
        ft_putstr_fd(s, fd);
        //  Envía el caracter ’\n’ al file descriptor especificado.
		ft_putchar_fd('\n', fd);
	}
}
*/

/**
 * COMPROBACION
int	main(void)
{
	char *message = "Hello, world!";
	int fd = 1; // Standard output (stdout)

	ft_putendl_fd(message, fd);
	return (0);
}
*/
