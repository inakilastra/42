/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilastra- <ilastra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:44:55 by ilastra-          #+#    #+#             */
/*   Updated: 2024/04/23 12:54:16 by ilastra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/**
Nombre de función
    ft_lstlast
Prototipo 
    t_list *ft_lstlast(t_list *lst);
Archivos a entregar
    -
Parámetros 
    lst: el principio de la lista.
Valor devuelto 
    Último nodo de la lista.
Funciones autorizadas
    Ninguna
Descripción 
    Devuelve el último nodo de la lista.

*/

/**
 * EXPLICACION
#include "libft.h"			//	Es necesario para size_t "unistd.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)					//	Si el puntero "lst" es nulo
		return (NULL);			//	Devuelvo NULL
	//	Recorro el puntero comprobando que el elemento "next" no sea NULL
	while (lst->next != NULL)
		lst = lst->next;		//  Me muevo puntero al siguiente elemento
	return (lst);				//	Devuelvo el último elemento de "lst"
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

    // Construir la lista conectando los nodos
    node1->next = node2;
    node2->next = node3;

    // Obtener el último nodo de la lista
    t_list *last_node = ft_lstlast(node1);

    // Imprimir el contenido del último nodo
    if (last_node)
        printf("Contenido del último nodo: %s\n", (char *)last_node->content);
    else
        printf("Error: la lista está vacía.\n");

    // Liberar la memoria asignada para la lista y los nodos
    free(node1);
    free(node2);
    free(node3);
	return (0);
}
*/
