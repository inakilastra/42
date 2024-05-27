#include "libft.h"
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <fcntl.h>
#include "mynormintte.c"
#include "mypaco.c"

#define DEF_COLOR "\033[0;39m"
#define GRAY "\033[0;90m"
#define RED "\033[0;91m"
#define GREEN "\033[0;92m"
#define YELLOW "\033[0;93m"
#define BLUE "\033[0;94m"
#define MAGENTA "\033[0;95m"
#define CYAN "\033[0;96m"
#define WHITE "\033[0;97m"

int	main(int argc, char **argv)
{
	char		*c;
	char		*fn;
	char		bonus;
	char		test;
	
	if (argc < 1 && argc > 5)
	{
		printf("\033[0;91m\nError en el número de argumentos\n");
		printf("\033[0;92mPrueba con: ./main \"Tu Nombre\"\n\n");
		return (0);
	}
	printf("\033[H\033[J");
	printf("%s******************************************************\n", CYAN);
	printf("%s***************MAIN COMPLETADO************************\n", CYAN);
	printf("%s******************************************************\n", CYAN);
	c = argv[1];
	bonus = 's';
	test = 't';
	fn = "X";
	if (argc > 2 && argv[2][0] == 'n')
		bonus = 'n';
	if (argc > 3)
	{ 
		if (argv[3][0] == 'p')
			test = 'p';
		else if (argv[3][0] == 'n')
			test = 'n';	
	}
	if (argc > 4) 
		if (argv[4] != NULL)
			fn = argv[4];
	if (test == 'p' || test == 't')
		mypaco(bonus, fn);
	if (test == 'n' || test == 't')		
    	mynorminette(bonus);
	printf("%s\n\tHola %s revisa hacia arriba los resultados\n\n", CYAN, c);
	return (0);
}
