/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilastra- <ilastra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:33:29 by ilastra-          #+#    #+#             */
/*   Updated: 2024/04/23 12:54:35 by ilastra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/*
Nombre de función
    ft_lstsize
Prototipo 
    int ft_lstsize(t_list *lst);
Archivos a entregar
    -
Parámetros 
    lst: el principio de la lista.
Valor devuelto 
    La longitud de la lista.
Funciones autorizadas
    Ninguna
Descripción 
    Cuenta el número de nodos de una lista.
*/

/**
 * EXPLICACION
#include "libft.h"			//	Es necesario para size_t "unistd.h"

int	ft_lstsize(t_list *lst)
{
	int	i;                  //  Inicio contador

	i = 0;                  //  Asigno 0 al contador
	while (lst != NULL)     //  Recorro "lst"
	{
		lst = lst->next;    //  Me muevo puntero al siguiente elemento
		i++;                //  Aumento el contador
	}
	return (i);             //  Devulevo el contador
}
*/

/**
 * COMPROBACION
int	main(void)
{
	// Crea tres elementos de ejemplo
	t_list *element1 = malloc(sizeof(t_list));
	element1->content = "Primer elemento";
	element1->next = malloc(sizeof(t_list));

	t_list *element2 = element1->next;
	element2->content = "Segundo elemento";
	element2->next = malloc(sizeof(t_list));

	t_list *element3 = element2->next;
	element3->content = "Tercer elemento";
	element3->next = NULL; // Marca el final de la lista

	// Une los elementos para formar la lista
	element1->next = element2;
	element2->next = element3;

	// Calcula el tamaño de la lista
	int tamano = ft_lstsize(element1);

	// Imprime el tamaño de la lista
	printf("La lista tiene %d elementos\n", tamano);

	// Libera la memoria asignada a los elementos de la lista
	free(element1);
	free(element2);
	free(element3);
	return (0);
}
*/
