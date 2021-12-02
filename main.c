#include "libft.h"
int main()
{
	// char *i;
	// i = "Hello";
	// printf("%p\n", i);
    char *ptr;
    ptr = "Hello";          
  ft_putchar( *(1+ (unsigned char*) &ptr) ); 
  ft_putchar( *( (unsigned char*) &ptr) );   
}