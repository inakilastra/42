/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilastra- <ilastra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:32:46 by ilastra-          #+#    #+#             */
/*   Updated: 2024/05/15 11:23:12 by ilastra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/**
Nombre de función
    ft_lstnew
Prototipo 
    t_list *ft_lstnew(void *content);
Archivos a entregar
    -
Parámetros 
    content: el contenido con el que crear el nodo.
Valor devuelto 
    El nuevo nodo
Funciones autorizadas
    malloc
Descripción 
    Crea un nuevo nodo utilizando malloc(3). 
    La variable miembro ’content’ se inicializa con el contenido del 
		parámetro ’content’. 
    La variable ’next’, con NULL.
*/

/**
 * EXPLICACION
#include "libft.h"			//	Es necesario para size_t "unistd.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;			//	Inicio puntero al nodo

	//	Reservo mem con tamaño del nodo "t_list"
	new = (t_list *)malloc(sizeof(t_list));
	if (!new)				//	Si falla la reserva mem
		return (NULL);		//	Devuelvo NULL
	//	Asigno el valor del parametro "content" al campo content
	new->content = content;
	new->next = NULL;		//	Asigno NULL al campo next del nuevo nodo
	return (new);			//	Devuelvo el puntero "new"		
}
*/

/**
 * COMPROBACION
int	main(void)
{
    // Crear un nuevo nodo
    t_list *node = ft_lstnew("Hello, world! Ok");

    if (node)
        printf("Content: %s\n", (char *)node->content);
    else
    	printf("Error: no se pudo crear el nuevo nodo.\n");
	free(node);
	return (0);
}
*/