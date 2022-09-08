#include <stdio.h>

int main()
{
   int a, i, sum = 0;
   scanf("%d", &a);
   for (i = 1; i < a; i++)
   {
      if (a % i == 0)
      {
         if (i != 1)
            printf("+ ");
         printf("%d ", i);
         sum += i;
      }
   }
   printf("= %d", sum);

   return 0;
}