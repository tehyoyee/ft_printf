#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char a[40] = "";
	int		x;
	int		len;

/*
	x = ft_printf("c = %c\n", 'a');
	printf("x = %d\n", x);
	x = printf("c = %c\n", 'a');
	printf("x = %d\n\n", x);
*/
	x = ft_printf("s = %s\n", a);
	printf("x = %d\n", x);
	x = printf("s = %s\n", a);
	printf("x = %d\n\n", x);
/*
	x = ft_printf("p = %p\n", a);
	printf("x = %d\n", x);
	x = printf("p = %p\n", a);
	printf("x = %d\n\n", x);
*/
	x = ft_printf("d = %d\n", 0);
	printf("x = %d\n", x);
	x = printf("d = %d\n", 0);
	printf("x = %d\n\n", x);
/*
	x = ft_printf("i = %i\n", 1234);
	printf("x = %d\n", x);
	x = printf("i = %i\n", 1234);
	printf("x = %d\n\n", x);
*/
/*
	x = ft_printf("u = %z1234\n", ww);
	printf("x = %d\n", x);
	x = printf("u = %u\n", 123);
	printf("x = %d\n\n", x);
*/
/*
	x = ft_printf("x = %x\n", 30);
	printf("x = %d\n", x);
	x = printf("x = %x\n", 30);
	printf("x = %d\n\n", x);
	ft_printf("X = %X\n", 30);
	printf("X = %X\n", 30);
*/
}
