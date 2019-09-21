#include <string.h>

void *memset(void *destination, int c, size_t n)
{
	char *ptr;
	int i;

	i = 0;
	ptr = (char *)destination;
	while (n-- > 0)
	{
		ptr[i++] = c;
	}
}