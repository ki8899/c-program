#include <stdio.h>
int main()
{
   int a, b, *p, *q, sum;

   printf("Enter the  two integers \n");
   scanf("%d%d", &a, &b);

   p = &a;
   q = &b;

   sum = *p + *q;

   printf("Sum of the numbers = %d\n", sum);

   return 0;
}
