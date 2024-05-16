/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilastra- <ilastra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:14:06 by ilastra-          #+#    #+#             */
/*   Updated: 2024/04/18 15:54:51 by ilastra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/**
Nombre de función
	ft_striteri
Prototipo 
	void ft_striteri(char *s, void (*f)(unsigned int, char*));
Archivos a entregar
	-
Parámetros 
	s: La string que iterar.
	f: La función a aplicar sobre cada carácter.
Valor devuelto 
	Nada
Funciones autorizadas
	Ninguna
Descripción 
	A cada carácter de la string ’s’, aplica la función ’f’ dando como 
	parámetros el índice de cada carácter dentro de ’s’ y la dirección del 
	propio carácter, que podrá modificarse si es necesario.
*/

/**
 * EXPLICACION
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;	//	Inicio contador posicion puntero

	if (!s || !f)		//	Si "s" o "f" son nulos
		return ;		//	No devuelvo nada
	i = 0;				//	Asigno o al contador
	while (s[i])		//	Recorro "s"
	{
		//	Aplico la función "f" pasando como argumentos "i" y "s[i]"
		//	el resultado se aplica directamente al caracter
		f(i, &s[i]);
		i++;			//	Aumento del contador
	}
}
*/

/**
 * COMPROBACION
#include <ctype.h> 

//	Convertir los caracteres pares de una cadena a minúsculas y 
//	los caracteres impares a mayúsculas:

//	La cadena original "Mi Mundo" se modificará a "Mi MuNdO".
void	change_case(unsigned int i, char *c)
{
	if (i % 2 == 0)
    	*c = tolower(*c); // Minúsculas para pares
	else
    	*c = toupper(*c); // Mayúsculas para impares
}

int	main(void)
{
	char	original[] = "Mi mUndo";
	ft_striteri(original, change_case);
	printf("Cambiado: %s\n", original);
	return (0);
}
*/
