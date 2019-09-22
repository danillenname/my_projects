#include <string.h>

int ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	int i;
	const unsigned char *ptr1;
	const unsigned char *ptr2;

	i = 0;
	ptr1 = arr1;
	ptr2 = arr2;
	while (n-- > 0)
	{
		if (ptr1[i] != ptr2[i])
		{
			return (ptr1[i] > ptr2[i] ? 1 : -1);
		}
		i++;
	}
	return (0);
}