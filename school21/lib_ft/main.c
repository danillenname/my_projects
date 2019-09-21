#include <stdio.h>
#include <string.h>

void *memset (void *destination, int c, size_t n);

int main()
{
	unsigned char src[15] = "1234567890";
 
   // Заполняем массив символом ‘1’
   memset (src, 56, 14);

   // Вывод массива src на консоль
   printf ("src: %s\n", src);
}