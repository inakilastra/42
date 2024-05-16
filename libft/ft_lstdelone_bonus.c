/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilastra- <ilastra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:33:32 by ilastra-          #+#    #+#             */
/*   Updated: 2024/04/23 12:54:03 by ilastra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/**
Nombre de función
    ft_lstdelone
Prototipo 
    void ft_lstdelone(t_list *lst, void (*del)(void *));
Archivos a entregar
    -
Parámetros 
    lst: el nodo a liberar.
    del: un puntero a la función utilizada para liberar el contenido del nodo.
Valor devuelto 
    Nada
Funciones autorizadas
    free
Descripción 
    Toma como parámetro un nodo ’lst’ y libera la memoria del contenido 
    utilizando la función ’del’ dada como parámetro, además de liberar el nodo.
    La memoria de ’next’ no debe liberarse.
*/

/**
 * EXPLICACION
#include "libft.h"			//	Es necesario para size_t "unistd.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)       //  Si "lst" o "del" son nulos
		return ;            //  Salgo de la función
	del(lst->content);      //  Borro el contenido del nodo
	free(lst);              //  Libero la mem de "lst"
}
*/

/**
 * COMPROBACION
// Función para eliminar un entero
void delete_int(void *content)
{
    int *num = (int *)content;
    printf("Eliminando el número: %d\n", *num);
    free(num);
}

// Función para imprimir el contenido de un nodo
void print_node(t_list *node)
{
    int *num = (int *)node->content;
    printf("Contenido del nodo: %d\n", *num);
}

int main(void)
{
    // Crear varios nodos con contenido dinámico (números enteros)
    t_list *head = NULL;
    for (int i = 0; i < 5; i++)
    {
        int *num = (int *)malloc(sizeof(int));
        *num = i * 10;
        t_list *node = ft_lstnew(num);
        ft_lstadd_back(&head, node);
    }

    // Imprimir contenido de los nodos antes de eliminarlos
    printf("Antes de eliminar los nodos:\n");
    t_list *curr = head;
    while (curr)
    {
        print_node(curr);
        curr = curr->next;
    }

    // Eliminar todos los nodos usando ft_lstdelone
    while (head)
    {
        ft_lstdelone(head, &delete_int);
        head = head->next;
    }

    // Imprimir contenido de los nodos después de eliminarlos
    printf("\nDespués de eliminar los nodos:\n");
    curr = head; // head es NULL, no hay nodos restantes
    while (curr)
    {
        print_node(curr);
        curr = curr->next;
    }
	return (0);
}
*/
