#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dst, const void *src, size_t n);

int main()
{
	char *src = "asss";
   char *dst;
   // Заполняем массив символом ‘1’
   memcpy (dst, src, 4);

   // Вывод массива src на консоль
   printf ("src: %s\n", dst);
}