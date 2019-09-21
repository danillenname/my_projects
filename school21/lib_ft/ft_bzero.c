#include <string.h>

void bzero(void *s, size_t n)
{
	int i;
	char *ptr;

	ptr = (char *)s;
	i = 0;
	while (n-- > 0)
	{
		ptr[i] = '\0';
		i++;
		// *(ptr++) = 0;
	}
}