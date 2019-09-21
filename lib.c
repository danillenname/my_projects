#include <stdio.h>

int main(int argc, char **argv)
{
	int n = 0;
	while (n < 3)
		printf("%d", n++);
	printf("\t%d\t%s", argc, argv[2]);
}
