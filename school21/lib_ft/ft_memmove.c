#include <string.h>

void *memmove(void *dst, const void *src, size_t count)
{
	char *ptr;
	const char *ptr2;
	int i;

	i = 0;
	ptr = (char *)dst;
	ptr2 = (char *)src;
	if (dst > src)
	{
		while (i < count)
		{
			ptr[count - i - 1] = ptr2[count - i - 1];
			i++;
		}
	}
	else
	{
		while (count > 0)
		{
			*(ptr++) = *(ptr2++);
			count++;
		}
	}
	return(dst);
}