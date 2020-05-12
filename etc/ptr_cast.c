#include <stdio.h>

int	main(void)
{
	int a;
	uintptr_t b;
	unsigned long long c;

	a = 3;
	printf("%p\n", &a);
	b = ((uintptr_t)a);

	printf("%lu\n", b);
	printf("%p\n", (void *)b);

}
