/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilastra- <ilastra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 09:40:53 by ilastra-          #+#    #+#             */
/*   Updated: 2024/04/23 12:54:10 by ilastra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/**
Nombre de función
    ft_lstiter
Prototipo 
    void ft_lstiter(t_list *lst, void (*f)(void *));
Archivos a entregar
    -
Parámetros 
    lst: un puntero al primer nodo.
    f: un puntero a la función que utilizará cada nodo.
Valor devuelto 
    Nada
Funciones autorizadas
    Ninguna
Descripción 
    Itera la lista ’lst’ y aplica la función ’f’ en el contenido de cada nodo.
*/

/**
 * EXPLICACION
#include "libft.h"			//	Es necesario para size_t "unistd.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)			//	Si "lst" o "f" son nulos
		return ;			//	Salgo de la función
	while (lst)				//	Recorro la lista "lst"
	{
		f(lst->content);	//	Aplico la función "f" al nodo
		lst = lst->next;	//	Me muevo al siguiente nodo
	}
}
*/

/**
 * COMPROBACION
// Función para crear un nodo de la lista
t_list *create_node(void *data)
{
	t_list *node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return NULL;
	node->content = data;
	node->next = NULL;
	return node;
}

// Función para agregar un nodo al final de la lista
void add_node(t_list **head, t_list *new_node)
{
	if (!head || !new_node)
		return;
	if (!*head)
		*head = new_node;
	else
	{
		t_list *temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}
}

// Función callback para convertir a mayúsculas el contenido de un nodo
void to_uppercase(void *data)
{
	char *str = (char *)data;
	while (*str)
	{
		*str = toupper(*str);
		str++;
	}
}

int main(void)
{
	t_list *list = NULL;
	char *str1 = strdup("hola");
	char *str2 = strdup("mundo");
	char *str3 = strdup("adios");

	add_node(&list, create_node(str1));
	add_node(&list, create_node(str2));
	add_node(&list, create_node(str3));

	printf("Contenido de la lista antes de aplicar ft_lstiter:\n");
	t_list *temp = list;
	while (temp)
	{
		printf("%s ", (char *)temp->content);
		temp = temp->next;
	}
	printf("\n");

	ft_lstiter(list, to_uppercase);

	printf("Contenido de la lista después de aplicar ft_lstiter:\n");
	temp = list;
	while (temp)
	{
		printf("%s ", (char *)temp->content);
		temp = temp->next;
	}
	printf("\n");

	free(list);
	return (0);
}
*/