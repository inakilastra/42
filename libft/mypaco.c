#include "libft.h"
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <fcntl.h>

#define DEF_COLOR "\033[0;39m"
#define GRAY "\033[0;90m"
#define RED "\033[0;91m"
#define GREEN "\033[0;92m"
#define YELLOW "\033[0;93m"
#define BLUE "\033[0;94m"
#define MAGENTA "\033[0;95m"
#define CYAN "\033[0;96m"
#define WHITE "\033[0;97m"

const char* get_color1(int value) {
    switch (value) {
        case 0:
            return GRAY;
        case 1:
            return RED;
        case 2:
            return GREEN;
        case 3:
            return YELLOW;
        case 4:
            return BLUE;
        case 5:
            return MAGENTA;
        case 6:
            return CYAN;
        case 7:
            return WHITE;												
        default:
            return DEF_COLOR;
    }
}

int mypaco(char bonus, char *fn)
{
    /**
     * https://www.dropbox.com/scl/fi/mtxsyi4ptw7ep6gmgnz2f/main.c?rlkey=c1z7418zv1oh4p2dtne5keuhe&e=5&st=l5y9d4jx&dl=0
    */
    int         i;
    const char 	*color;

	if (bonus == 's')
	{
        printf("%sBONUS\n", RED);
//ft_lstmap_bonus.c
//ft_lstiter_bonus.c
//ft_lstclear_bonus.c
//ft_lstdelone_bonus.c
//ft_lstadd_back_bonus.c
//ft_lstlast_bonus.c
//ft_lstsize_bonus.c
//ft_lstadd_front_bonus.c
//ft_lstnew_bonus.c
    }
//ft_putnbr_fd.c
//ft_putendl_fd.c
//ft_putstr_fd.c
//ft_putchar_fd.c
//ft_striteri.c
//ft_strmapi.c
//ft_itoa.c
//ft_split.c
//ft_strtrim.c
//ft_strjoin.c
//ft_substr.c
//ft_strdup.c
//ft_calloc.c
//ft_atoi.c
//ft_strnstr.c
//ft_memcmp.c
//ft_memchr.c
//ft_strncmp.c
//ft_strrchr.c
//ft_strchr.c
//ft_tolower.c
//ft_toupper.c
//ft_strlcat.c
//ft_strlcpy.c
//ft_memmove.c
	char str25[] = "QWERTY ES LA DISTRIBUCIÓN DEL TECLADO";
	char str26[] = "Hola Mundo!";
	ft_memmove(str25,str26,10);
    i = 2;
    if (ft_strncmp(fn, "Hola MundoLA DISTRIBUCIÓN DEL TECLADO", 37) == 0)
	    i = 1;	
    color = get_color1(i);
    printf("%sft_memmove vs memmove\n", color);
	if (i == 1 || ft_strncmp(fn, "memmove", 7) == 0)
	{	    
        char str21[] = "QWERTY ES LA DISTRIBUCIÓN DEL TECLADO";
        char str22[] = "Hola Mundo!";
        printf("%s\tdst: %s\n\tsrc: %s\n", color, str21, str22);
        ft_memmove(str21,str22,10);
        printf("%s\tft_memmove(dst,src,10) dst: %s\n", color, str21);    

        char str23[] = "QWERTY ES LA DISTRIBUCIÓN DEL TECLADO";
        char str24[] = "Hola Mundo!";
        ft_memmove(str23,str24,10);
        printf("%s\t   memmove(dst,src,10) dst: %s\n", color, str23);
        printf("%s******************************************************\n", color);
    }
//ft_memcpy.c
	char src1[] = "Copio esta frase.";
	char dst1[30];
	i = 2;
	ft_memcpy(dst1,src1,strlen(src1) +1 );
	if (ft_strncmp(dst1, src1, strlen(src1)) != 0)
		i = 1;
	color = get_color1(i);
	printf("%sft_memcpy  vs memcpy\n", color);		
	if (i == 1 || ft_strncmp(fn, "memcpy", 6) == 0)
	{		
		printf("%s\tft_memcpy Copio la memoria src1: \"%s\" en dst1: \"%s\"\n", color, src1, dst1);
		printf("%s\t   memcpy Copio el memoria src1: \"%s\" en dst1: \"%s\"\n", color, src1, dst1);
        printf("%s******************************************************\n", color);
	}
//fn_bzero(c);
	char 	str10[100] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char 	str11[100] = "                    UVWXYZ";
	i = 2;
	ft_bzero(str10, 20);
	for (int j = 20; j < 100; j++) 
	{
		if (str10[j] != str11[j])
			i = 1;
	}  
	color = get_color1(i);
	printf("%sft_bzero   vs bzero\n", color);	
	if (i == 1 || ft_strncmp(fn, "bzero", 5) == 0)
	{
		char str3[100] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		ft_bzero(str3, 20);
		printf("%s\tft_bzero ABCDEFGHIJKLMNOPQRSTUVWXYZ pasa a ser ", color);
		for (int j = 0; j < 100; j++) 
		{
			printf("%s%c", color, str3[j]);
		}
		printf("\n");
		char str4[100] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		ft_bzero(str4, 20);
		printf("%s\t   bzero ABCDEFGHIJKLMNOPQRSTUVWXYZ pasa a ser ", color);
		for (int j = 0; j < 100; j++) 
		{
			printf("%s%c", color, str4[j]);
		}
		printf("\n");
		printf("%s******************************************************\n", color);
	}
//fn_memset(c);	
	char 	str1[10] = "Hola Mundo";
	ft_memset(str1, 'X', 5);
	if (strstr(str1, "XXXXXMundo") == NULL)
		i = 1;
	else
		i = 2;
	color = get_color1(i);
	printf("%sft_memset  vs memset\n", color);		
	if (i == 1 || ft_strncmp(fn, "memset", 6) == 0)
	{
		char strA[10] = "Hola Mundo";
		ft_memset(strA, 'X', 5);
		printf("%s\tft_memset \"Hola Mundo\", 'X', 5 --> %s\n", color, strA);
		char strB[10] = "Hola Mundo";
		memset(strB, 'X', 5);	
		printf("%s\t   memset \"Hola Mundo\", 'X', 5 --> %s\n", color, strB);
		printf("%s******************************************************\n", color);
	}
//fn_strlen(c);	
	i = 1;
	if (ft_strlen("Hola Mundo") == 10)
		i = 2;
	color = get_color1(i);
	printf("%sft_strlen  vs strlen\n", color);
	if (i == 1 || ft_strncmp(fn, "strlen", 6) == 0)
	{
		printf("%s\tft_strlen \"Hola Mundo\" --> %ld\n", color, ft_strlen("Hola Mundo"));	
		printf("%s\tstrlen \"Hola Mundo\" --> %ld\n", color, strlen("Hola Mundo"));
		printf("%s******************************************************\n", color);
	}	
//fn_isprint(c);	
	i = 1;
	if (ft_isprint('A') == 1 && ft_isprint('Z') == 1 
		&& ft_isprint('a') == 1 && ft_isprint('z') == 1 
		&& ft_isprint('0') == 1 && ft_isprint('9') == 1
		&& ft_isprint(0) == 0)
		i = 2;
	color = get_color1(i);
	printf("%sft_isprint vs isprint\n", color);
	if (i == 1 || ft_strncmp(fn, "isprint", 7) == 0)
	{
		printf("%s\tft_isprint 'A' --> %d\n", color, ft_isprint('A'));	
		printf("%s\tft_isprint 'a' --> %d\n", color, ft_isprint('a'));	
		printf("%s\tft_isprint '0' --> %d\n", color, ft_isprint('0'));	
		printf("%s\tft_isprint NULL --> %d\n", color, ft_isprint(0));	
		printf("%s\tft_isprint '!' --> %d\n", color, ft_isprint('!'));
		printf("%s\tisprint 'A' --> %d\n", color, isprint('A'));	
		printf("%s\tisprint 'a' --> %d\n", color, isprint('a'));	
		printf("%s\tisprint '0' --> %d\n", color, isprint('0'));	
		printf("%s\tisprint NULL --> %d\n", color, isprint(0));	
		printf("%s\tisprint '!' --> %d\n", color, isprint('!'));
		printf("%s******************************************************\n", color);
	}	
//fn_isascii(c);
	i = 1;
	if (ft_isascii('A') == 1 && ft_isascii('Z') == 1 
		&& ft_isascii('a') == 1 && ft_isascii('z') == 1 
		&& ft_isascii('0') == 1 && ft_isascii('9') == 1
		&& ft_isascii(128) == 0)
		i = 2;
	color = get_color1(i);
	printf("%sft_isascii vs isascii\n", color);
	if (i == 1 || ft_strncmp(fn, "isascii", 7) == 0)
	{
		printf("%s\tft_isascii 'A' --> %d\n", color, ft_isascii('A'));
		printf("%s\tft_isascii '0' --> %d\n", color, ft_isascii('0'));
		printf("%s\tft_isascii 128 --> %d\n", color, ft_isascii(128));
		printf("%s\tisascii 'A' --> %d\n", color, isascii('A'));
		printf("%s\tisascii '0' --> %d\n", color, isascii('0'));
		printf("%s\tisascii 128 --> %d\n", color, isascii(128));
		printf("%s******************************************************\n", color);
	}
//fn_isalnum(c);	
	i = 1;
	if (ft_isalnum('A') == 1 && ft_isalnum('Z') == 1 
		&& ft_isalnum('a') == 1 && ft_isalnum('z') == 1 
		&& ft_isalnum('0') == 1 && ft_isalnum('9') == 1
		&& ft_isalnum('+') == 0)
		i = 2;
	color = get_color1(i);
	printf("%sft_isalnum vs isalnum\n", color);
	if (i == 1 || ft_strncmp(fn, "isalnum", 7) == 0)
	{	
		printf("%s\tft_isalnum 'A' --> %d\n", color, ft_isalnum('A'));	
		printf("%s\tft_isalnum 'Z' --> %d\n", color, ft_isalnum('Z'));
		printf("%s\tft_isalnum 'a' --> %d\n", color, ft_isalnum('a'));	
		printf("%s\tft_isalnum 'z' --> %d\n", color, ft_isalnum('z'));	
		printf("%s\tft_isalnum '0' --> %d\n", color, ft_isalnum('0'));
		printf("%s\tft_isalnum '9' --> %d\n", color, ft_isalnum('9'));
		printf("%s\tft_isalnum '+' --> %d\n", color, ft_isalnum('+'));
		printf("%s\tisalnum 'A' --> %d\n", color, isalnum('A'));	
		printf("%s\tisalnum 'Z' --> %d\n", color, isalnum('Z'));
		printf("%s\tisalnum 'a' --> %d\n", color, isalnum('a'));	
		printf("%s\tisalnum 'z' --> %d\n", color, isalnum('z'));	
		printf("%s\tisalnum '0' --> %d\n", color, isalnum('0'));
		printf("%s\tisalnum '9' --> %d\n", color, isalnum('9'));
		printf("%s\tisalnum '+' --> %d\n", color, isalnum('+'));
		printf("%s******************************************************\n", color);
	}	
//fn_isdigit(c);	
	i = 1;
	if (ft_isdigit('0') == 1 && ft_isdigit('9') == 1 && ft_isdigit('X') == 0)
		i = 2;
	color = get_color1(i);
	printf("%sft_isdigit vs isdigit\n", color);
	if (i == 1 || ft_strncmp(fn, "isdigit", 7) == 0)
	{
		printf("%s\tft_isdigit 0 --> %d\n", color, ft_isdigit('0'));
		printf("%s\tft_isdigit 9 --> %d\n", color, ft_isdigit('9'));	
		printf("%s\tft_isdigit X --> %d\n", color, ft_isdigit('X'));	
		printf("%s\tisdigit 0 --> %d\n", color, isdigit('0'));
		printf("%s\tisdigit 9 --> %d\n", color, isdigit('9'));	
		printf("%s\tisdigit X --> %d\n", color, isdigit('X'));
		printf("%s******************************************************\n", color);		
	}
//fn_isalpha(c);
i = 1;
	if (ft_isalpha('A') == 1 && ft_isalpha('Z') == 1 
		&& ft_isalpha('a') == 1 && ft_isalpha('z') == 1 
		&& ft_isalpha('0') == 0)
		i = 2;
	color = get_color1(i);
	printf("%sft_isalpha vs isalpha\n", color);
	if (i == 1 || ft_strncmp(fn, "isalpha", 7) == 0)
	{	
		printf("%s\tft_isalpha 'A' --> %d\n", color, ft_isalpha('A'));
		printf("%s\tft_isalpha 'Z' --> %d\n", color, ft_isalpha('Z'));	
		printf("%s\tft_isalpha 'a' --> %d\n", color, ft_isalpha('a'));		
		printf("%s\tft_isalpha 'z' --> %d\n", color, ft_isalpha('z'));
		printf("%s\tft_isalpha '0' %d\n", color, ft_isalpha('0'));	
		printf("%s\tisalpha 'A' --> %d\n", color, isalpha('A'));
		printf("%s\tisalpha 'Z' --> %d\n", color, isalpha('Z'));	
		printf("%s\tisalpha 'a' --> %d\n", color, isalpha('a'));		
		printf("%s\tisalpha 'z' --> %d\n", color, isalpha('z'));
		printf("%s\tisalpha '0' %d\n", color, isalpha('0'));
		printf("%s******************************************************\n", color);
	}
    return(0);
}
