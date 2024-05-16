/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilastra- <ilastra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:45:11 by ilastra-          #+#    #+#             */
/*   Updated: 2024/04/23 16:01:24 by ilastra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/**
Nombre de función
	ft_putchar_fd
Prototipo 
	void ft_putchar_fd(char c, int fd);
Archivos a entregar
	-
Parámetros 
	c: El carácter a enviar.
	fd: El file descriptor sobre el que escribir.
Valor devuelto 
	Nada
Funciones autorizadas
	write
Descripción 
	Envía el carácter ’c’ al file descriptor especificado.
*/

/**
 * EXPLICACION
#include "libft.h"			//	Es necesario para write "unistd.h"

void	ft_putchar_fd(char c, int fd)
{
	//	fd es el descriptor de archivo en el que se desea escribir.
	//	&c es la dirección de memoria del carácter c. 
	//		Esto significa que write no recibirá una copia del carácter, 
	//		sino que accederá directamente a la memoria donde se almacena.
	//	1 es la cantidad de bytes que se escribirán. 
	//		En este caso, solo se escribe un único byte, 
	//		correspondiente al carácter c.
	write(fd, &c, 1);
}
//	La función ft_putchar_fd recibe un carácter 
//	y un descriptor de archivo como argumentos.
//	Utiliza la función write para imprimir el 
//	carácter en el descriptor de archivo especificado.
*/

/*
 * COMPROBACION
int	main(void)
{
  char c = 'a';
  int fd = 1; // Salida estándar (stdout)

  ft_putchar_fd(c, fd);
	return (0);
}
*/
