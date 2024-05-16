/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilastra- <ilastra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:03:33 by ilastra-          #+#    #+#             */
/*   Updated: 2024/04/23 16:00:54 by ilastra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

/**
Nombre de función
    ft_putstr_fd
Prototipo 
    void ft_putstr_fd(char *s, int fd);
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
    Envía la string ’s’ al file descriptor especificado.
*/

/**
 * EXPLICACION
#include "libft.h"			//	Es necesario para size_t "unistd.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;          //  Inicio contador

	if (!s)         //  Si "s" es nulo
		return ;    //	No devuelvo nada
	i = 0;          //  Asigno 0 al contador
	while (s[i])    //  Recorro "s"
	{
        //	La función ft_putchar_fd recibe un carácter 
        //	y un descriptor de archivo como argumentos.
        //	Utiliza la función write para imprimir el 
        //	carácter en el descriptor de archivo especificado.
        ft_putchar_fd(s[i], fd);
		i++;        //  Aumento el contador
	}
}

*/

/**
 * COMPROBACION
int	main(void)
{
 char *cadena = "Hola, mundo!";
  int fd = 1; // fd = 1 normalmente apunta a la salida estándar (consola)

  ft_putstr_fd(cadena, fd);
  printf("\n"); // Imprime un salto de línea adicional usando printf

	return (0);
}
*/
