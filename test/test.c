#include <stdio.h>
/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
   int a[5];
   int *p;
   int *p2;

   *a = 98;
   *(a + 1) = 198;
   *(a + 2) = 298;
   a[3] = 398;
   *(a + 4) = 498;
   printf("1 = %d, 2 = %d, 3 = %d \n 4 = %d, 5 = %d", a[0], a[1], a[2], a[3], a[4]);
   p = a + 1;
   printf("\na[1] = %d", a[1]);
   printf("\n P = %p", p);

   *p = 98;  
   printf("\na[1]  = %d", a[1]);
   printf("\n *p = %d", *p);
   p2 = a + 3;
   printf("a[3] = %d", a[3]);
   *p2 = *p + 1337;
   printf("\n a[3] = %d", a[3]);
   return (0);
}
