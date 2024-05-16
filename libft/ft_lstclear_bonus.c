/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilastra- <ilastra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 09:03:45 by ilastra-          #+#    #+#             */
/*   Updated: 2024/05/15 11:21:28 by ilastra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nodo_actual;
	t_list	*nodo_prox;

	nodo_actual = *lst;
	while (nodo_actual)
	{
		nodo_prox = nodo_actual->next;
		ft_lstdelone(nodo_actual, del);
		nodo_actual = nodo_prox;
	}
	*lst = NULL;
}

/**
Nombre de función
    ft_lstclear
Prototipo 
    void ft_lstclear(t_list **lst, void (*del)(void *));
Archivos a entregar
    -
Parámetros 
    lst: la dirección de un puntero a un nodo.
    del: un puntero a función utilizado para eliminar el contenido de un nodo.
Valor devuelto 
    Nada
Funciones autorizadas
    free
Descripción 
    Elimina y libera el nodo ’lst’ dado y todos los consecutivos de ese nodo, 
    utilizando la función ’del’ y free(3).
    Al final, el puntero a la lista debe ser NULL.
*/

/**
 * EXPLICACION
#include "libft.h"			//	Es necesario para size_t "unistd.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nodo_actual;	//	Inicio puntero
	t_list	*nodo_prox;		//	Inicio puntero

	nodo_actual = *lst;		//	Asigno la "lst" a "nodo_actual"
	while (nodo_actual)		//	Recorro los nodos de la lista
	{
		//	Asigno el siguiente nodo para no perder la referencia
		nodo_prox = nodo_actual->next;
		//	Elimino el nodo actual y libero mem con ft_lstdelone
		ft_lstdelone(nodo_actual, del);
		//	Asigno el siguiente nodo para seguir recorriendo la lista
		nodo_actual = nodo_prox;
	}
	*lst = NULL;			//	Asigno NULL al puntero "lst"
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
    // Crear una lista con varios nodos
    t_list *head = NULL;
    for (int i = 0; i < 5; i++)
    {
        int *num = (int *)malloc(sizeof(int));
        *num = i * 10;
        t_list *node = ft_lstnew(num);
        ft_lstadd_back(&head, node);
    }

    // Mostrar contenido de los nodos antes de limpiar la lista
    printf("Antes de limpiar la lista:\n");
    t_list *curr = head;
    while (curr)
    {
        print_node(curr);
        curr = curr->next;
    }

    // Limpiar la lista utilizando ft_lstclear
    ft_lstclear(&head, &delete_int);

    // Mostrar que la lista está vacía después de limpiarla
    printf("\nDespués de limpiar la lista:\n");
    if (head == NULL)
    {
        printf("La lista está vacía\n");
    }
    else
    {
        printf("La lista no está vacía\n");
    }

	return (0);
}
*/
