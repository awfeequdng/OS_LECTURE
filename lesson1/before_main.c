/*before_main.c*/
#include <stdio.h>

static void __attribute__((constructor)) before_main() 
{
	printf("before main\n");
}

int main()
{
	printf("main \n");
	return 0;
}
