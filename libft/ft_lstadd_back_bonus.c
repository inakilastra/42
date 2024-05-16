/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilastra- <ilastra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:57:13 by ilastra-          #+#    #+#             */
/*   Updated: 2024/04/23 12:53:41 by ilastra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_nodo;

	if (!lst || !new)
		return ;
	last_nodo = ft_lstlast(*lst);
	if (!last_nodo)
		*lst = new;
	else
		last_nodo->next = new;
}

/**
Nombre de función
    ft_lstadd_back
Prototipo 
    void ft_lstadd_back(t_list **lst, t_list *new);
Archivos a entregar
    -
Parámetros 
    lst: el puntero al primer nodo de una lista.
    new: el puntero a un nodo que añadir a la lista.
Valor devuelto 
    Nada
Funciones autorizadas
    Ninguna
Descripción 
    Añade el nodo ’new’ al final de la lista ’lst’.
*/

/**
 * EXPLICACION
#include "libft.h"			//	Es necesario para size_t "unistd.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_nodo;		//	Inicio puntero last_nodo

	if (!lst || !new)		//	Si "lst" no esta iniciada o "new" es nulo
		return ;			//	Devuelvo NULL
	//	Asigno a "last_nodo" el último nodo de "lst" con ft_lstlast
	last_nodo = ft_lstlast(*lst);
	if (!last_nodo)			//	Si último nodo nulo
		*lst = new;			//	Asigno "new" al puntero "lst"
	else
		last_nodo->next = new;	// Agrego el nuevo nodo "new" 
}
*/

/**
 * COMPROBACION
int	main(void)
{
    // Crear algunos nodos para la lista
    t_list *node1 = ft_lstnew("First node");
    t_list *node2 = ft_lstnew("Second node");
    t_list *node3 = ft_lstnew("Third node");

    if (!node1 || !node2 || !node3)
    {
        printf("Error: no se pudo crear el nodo.\n");
        return 1;
    }

    // Lista inicialmente vacía
    t_list *list = NULL;

    // Agregar nodos a la lista
    ft_lstadd_back(&list, node1);
    ft_lstadd_back(&list, node2);
    ft_lstadd_back(&list, node3);

    // Imprimir la lista para verificar
    printf("Lista después de agregar nodos:\n");
	// Imprimir los contenidos de la lista para verificar el orden
    t_list *current = list;
    while (current)
    {
        printf("Content: %s\n", (char *)current->content);
        current = current->next;
    }

    // Liberar la memoria asignada para la lista y los nodos
    free(node1);
    free(node2);
    free(node3);
	return (0);
}
*/
