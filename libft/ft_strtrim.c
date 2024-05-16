/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilastra- <ilastra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:44:36 by ilastra-          #+#    #+#             */
/*   Updated: 2024/04/18 13:11:53 by ilastra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_search_char_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	int		i;
	int		start;
	int		end;
	int		len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_search_char_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_search_char_in_set(s1[end - 1], set))
		end--;
	len = end - start;
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (start < end)
		dst[i++] = s1[start++];
	dst[i] = '\0';
	return (dst);
}

/**
Nombre de función
    ft_strtrim
Prototipo 
    char *ft_strtrim(char const *s1, char const *set);
Archivos a entregar
    -
Parámetros 
    s1: La string que debe ser recortada.
    set: Los caracteres a eliminar de la string.
Valor devuelto 
    La string recortada.
    NULL si falla la reserva de memoria.
Funciones autorizadas
    malloc
Descripción 
    Elimina todos los caracteres de la string ’set’ desde el principio y 
    desde el final de ’s1’, hasta encontrar un caracter no perteneciente 
    a ’set’. La string resultante se devuelve con una reserva de malloc(3)
*/

/**
 * EXPLICACION
#include "libft.h"			//	Es necesario para size_t "unistd.h"
//	Esta función es estática, lo que significa que solo es accesible dentro
//	del archivo donde se define.
static int	ft_search_char_in_set(char c, char const *set)
{
	int	i;					//	Inicio un contador		

	i = 0;					//	Asigno 0 al contador
	while (set[i])			//	Recorro "set"
	{
		if (set[i] == c)	//	Si la posicion de "set" = "c"
			return (1);		//	Devuelvo 1
		i++;				//	Aumento el contador
	}
	return (0);				//	Devulevo 0
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;				//	Inicio puntero dst
	int		i;					//	Inicio contador i
	int		start;				//	Inicio contador start
	int		end;				//	Inicio contador end
	int		len;				//	Inicio tamaño len

	if (!s1 || !set)			//	Si "s1" o "set" no existe o Nulo
		return (NULL);			//	Devulevo NULL
	start = 0;					//	Asigno o al contador "start"
	//	Recorro "start" mientras no encuentre "c" en "set" adelante
	while (s1[start] && ft_search_char_in_set(s1[start], set))
		start++;				//	Aumento contador "start"
	end = ft_strlen(s1);		//	Asigno a "end" tamaño "s1"
	//	Recorro "start" mientras no encuentre "c" en "set" atras
	while (end > start && ft_search_char_in_set(s1[end - 1], set))
		end--;					//	Asigno o al contador "end"
	len = end - start;			//	Asigno tamaño len dif. "end" y "start"
	//	reservo mem en puntero "dst" tamaño char por len más cierre
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)					//	Si falla la reserva de memoria
		return (NULL);			//	Devuelvo NULL
	i = 0;						//	Asigno 0 al contador "i"
	while (start < end)			//	Recorro mientras "start" < "end"
		dst[i++] = s1[start++];	//	Asigno a la posicion "dst" la de "s1"
	dst[i] = '\0';				//	Cierro
	return (dst);					//	Devuelvo puntero "dst"
}
*/

/*
 * COMPROBACION
int	main(void)
{
  char *str = "   trim both sides   ";
  char *set = " ";

  // Call ft_strtrim to remove leading and trailing spaces
  char *trimmed_str = ft_strtrim(str, set);

  if (!trimmed_str) {
    printf("Error: ft_strtrim failed\n");
  } else {
    printf("Original string: '%s'\n", str);
    printf("Trimmed string: '%s'\n", trimmed_str);
    free(trimmed_str); // Free the memory allocated by ft_strtrim
  }
	return (0);
}
*/
