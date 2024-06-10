/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilastra- <ilastra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:22:40 by ilastra-          #+#    #+#             */
/*   Updated: 2024/06/10 16:14:25 by ilastra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_free(char **str)
{
	free(*str);
	*str = NULL;
	return (NULL);
}

char	*ft_clean_src(char *src)
{
	char	*new_src;
	char	*ptr;
	int		len;

	ptr = ft_strchr(src, '\n');
	if (!ptr)
	{
		new_src = NULL;
		return (ft_free(&src));
	}
	else
		len = (ptr - src) + 1;
	if (!src[len])
		return (ft_free(&src));
	new_src = ft_substr(src, len, ft_strlen(src) - len);
	ft_free(&src);
	if (!new_src)
		return (NULL);
	return (new_src);
}

char	*ft_new_line(char *src)
{
	char	*line;
	char	*ptr;
	int		len;

	ptr = ft_strchr(src, '\n');
	len = (ptr - src) + 1;
	line = ft_substr(src, 0, len);
	if (!line)
		return (NULL);
	return (line);
}

char	*ft_read_buffer(int fd, char *src)
{
	int		read_id;
	char	*buffer;

	read_id = 1;
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (ft_free(&src));
	buffer[0] = '\0';
	while (read_id > 0 && !ft_strchr(buffer, '\n'))
	{
		read_id = read (fd, buffer, BUFFER_SIZE);
		if (read_id > 0)
		{
			buffer[read_id] = '\0';
			src = ft_strjoin(src, buffer);
		}
	}
	free(buffer);
	if (read_id == -1)
		return (ft_free(&src));
	return (src);
}

char	*get_next_line(int fd)
{
	static char	*src = {0};
	char		*line;

	if (fd < 0)
		return (NULL);
	if ((src && !ft_strchr(src, '\n')) || !src)
		src = ft_read_buffer (fd, src);
	if (!src)
		return (NULL);
	line = ft_new_line(src);
	if (!line)
		return (ft_free(&src));
	src = ft_clean_src(src);
	return (line);
}
/*int	main(int argc, char **argv)
{
	int		fd;
	char	*test_str;

	if (argc != 2)
	{
		write(1, "Wrong argument count: Must be exactly 2.\n", 41);
		return (1);
	}
	test_str = NULL;
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write (1, "Error: Could not open file\n", 27);
		return (1);
	}
	while ((test_str = get_next_line(fd)))
	{
		printf("Result: %s", test_str);
		free(test_str);
	}
	close (fd);
	return (0);
}*/

/*
 * cc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c -o gnl
  ./gnl text1.txt
 */

/**
 * Este fragmento de código define la función get_next_line que lee una línea de texto de un descriptor de archivo (fd) y la devuelve. A continuación, se ofrece una explicación paso a paso:

1. Inclusión de encabezados:

C
#include "get_next_line.h"
Usa el código con precaución.
content_copy
Esta línea incluye el archivo de encabezado get_next_line.h. Este encabezado presumiblemente define prototipos (declaraciones) para funciones como ft_strchr, ft_substr, ft_strlen y ft_strjoin que se utilizan en este archivo. Estas funciones son probablemente para la manipulación de cadenas y la gestión de memoria y no se definen aquí.
2. Funciones auxiliares:

ft_free: Esta función toma un puntero doble a un carácter (char **str) y libera la memoria a la que apunta el puntero interno (*str). A continuación, establece el puntero interno en NULL para evitar punteros colgantes.

ft_clean_src: Esta función toma un puntero a carácter (char *src) como entrada.

Utiliza ft_strchr para encontrar la primera aparición de un carácter de nueva línea ('\n') dentro de la cadena src.
Si no se encuentra una nueva línea, libera la memoria src utilizando ft_free y devuelve NULL.
Si se encuentra una nueva línea, calcula la longitud de la subcadena hasta (pero sin incluir) el carácter de nueva línea.
A continuación, comprueba si la cadena después de la nueva línea está vacía. Si está vacía, libera src y devuelve NULL.
En caso contrario, utiliza ft_substr para extraer el contenido restante de src (después de la nueva línea) y lo almacena en una nueva cadena (new_src).
A continuación, libera la memoria original src y devuelve la cadena new_src que contiene el contenido restante.
ft_new_line: Esta función toma un puntero a carácter (char *src) como entrada.

Utiliza ft_strchr para encontrar la primera aparición de un carácter de nueva línea ('\n') dentro de la cadena src.
Calcula la longitud de la subcadena hasta (incluyendo) el carácter de nueva línea.
Utiliza ft_substr para extraer esa subcadena (incluyendo la nueva línea) y la almacena en una nueva cadena (line).
Devuelve la cadena line que contiene la primera línea de src.
ft_read_buffer: Esta función lee datos de un descriptor de archivo (fd) y los anexa a una cadena existente (src).

Asigna memoria para un búfer temporal (buffer) utilizando malloc.
Entra en un bucle que continúa hasta que se produce un error (read_id es -1), se encuentra una nueva línea (ft_strchr(buffer, '\n') devuelve un valor distinto de NULL) o no hay más datos que leer (read_id se convierte en 0).
Dentro del bucle, lee datos del descriptor de archivo (fd) en el buffer.
Si se leen datos correctamente (read_id es positivo), añade un terminador nulo ('\0') al final del búfer.
A continuación, utiliza ft_strjoin (presumiblemente definida en otro lugar) para combinar la cadena src existente con el contenido del buffer. La cadena combinada se almacena de nuevo en src.
Libera la memoria asignada para el buffer temporal.
Si se produce un error durante la lectura (read_id es -1), libera src y devuelve NULL. En caso contrario, devuelve la cadena src actualizada.
3. Función get_next_line:

Esta es la función principal que lee una línea del descriptor de archivo (fd).
Utiliza una variable estática src para almacenar cualquier contenido sobrante de las llamadas anteriores a get_next_line para el mismo descriptor de archivo. Esta variable se inicializa a una cadena vacía {0} la primera vez que se llama a la función.
Comprueba si el descriptor de archivo es válido (fd >= 0). Si no lo es, devuelve NULL.
Comprueba si ya hay un carácter de nueva línea en la cadena src (utilizando `ft_strchr
*/