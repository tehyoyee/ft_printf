#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

int	main(void)
{
	char a[10] = "";
	int		x;


	ft_printf("%c", NULL);

	x = ft_printf("%c\n", 'a');
	printf("x = %d\n", x);
	x = printf("%c\n", 'a');
	printf("x = %d\n", x);

	x = ft_printf("c = %c\n", 'a');
	printf("x = %d\n", x);
	x = printf("c = %c\n", 'a');
	printf("x = %d\n\n", x);


	x = ft_printf("s = %s\n", a);
	printf("x = %d\n", x);
	x = printf("s = %s\n", a);
	printf("x = %d\n\n", x);


	x = ft_printf("p = %p\n", a);
	printf("x = %d\n", x);
	x = printf("p = %p\n", a);
	printf("x = %d\n\n", x);


	x = ft_printf("d = %d\n", 0);
	printf("x = %d\n", x);
	x = printf("d = %d\n", 0);
	printf("x = %d\n\n", x);


	x = ft_printf("i = %i\n", 1234);
	printf("x = %d\n", x);
	x = printf("i = %i\n", 1234);
	printf("x = %d\n\n", x);



	x = ft_printf("u = %u\n", (unsigned int)3142434233);
	printf("x = %d\n", x);
	x = printf("u = %u\n", (unsigned int)3142434233);
	printf("x = %d\n\n", x);


	x = ft_printf("x = %x\n", 2*2147483647);
	printf("x = %d\n", x);
	x = printf("x = %x\n", 2*2147483647);
	printf("x = %d\n\n", x);

	x = ft_printf("X = %X\n", 30);
	printf("X = %d\n", x);
	x = printf("X = %X\n", 30);
	printf("X = %d\n\n", x);

	x = ft_printf("%#");
	printf("X = %d\n", x);
	x = ft_printf("%%%");
	printf("X = %d\n", x);
	//printf("X = %d\n", x);
	system("leaks a.out | grep leaked");
}
