/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilastra- <ilastra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:49:34 by ilastra-          #+#    #+#             */
/*   Updated: 2024/04/23 12:53:51 by ilastra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/**
Nombre de función
    ft_lstadd_front
Prototipo 
    void ft_lstadd_front(t_list **lst, t_list *new);
Archivos a entregar
    -
Parámetros 
    lst: la dirección de un puntero al primer nodo de una lista.
    new: un puntero al nodo que añadir al principio de la lista.
Valor devuelto 
    Nada
Funciones autorizadas
    Ninguna
Descripción 
    Añade el nodo ’new’ al principio de la lista ’lst’.
*/

/**
 * EXPLICACION
#include "libft.h"			//	Es necesario para size_t "unistd.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)		//	Si "lst" o "new" son nulos
		return ;			//	Salgo sin hacer nada
	//	El puntero next del nuevo elemento "new->next" se actualiza para que 
	//	apunte al nodo que actualmente se encuentra en la cabeza de la 
	//	lista "*lst"
	new->next = *lst;
	*lst = new;				//	Asigno el puntero "lst" al nuevo elemento "new"
}
*/

/**
 * COMPROBACION
int	main(void)
{
    t_list *node1 = ft_lstnew("First node");
    t_list *node2 = ft_lstnew("Second node");

    if (!node1 || !node2)
    {
        printf("Error: no se pudo crear el nodo.\n");
        return 1;
    }

    t_list *list = NULL; // Inicializamos la lista vacía

    // Agregar el nodo2 al frente de la lista
    ft_lstadd_front(&list, node2);

    // Agregar el nodo1 al frente de la lista
    ft_lstadd_front(&list, node1);

    // Imprimir los contenidos de la lista para verificar el orden
    t_list *current = list;
    while (current)
    {
        printf("Content: %s\n", (char *)current->content);
        current = current->next;
    }

    // Liberar la memoria asignada para la lista y los nodos
    while (list)
    {
        current = list->next;
        free(list);
        list = current;
    }
	return (0);
}
*/
