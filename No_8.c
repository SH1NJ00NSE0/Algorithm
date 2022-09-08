#include <stdio.h>
#include <string.h>

int main()
{
   char a[101], b[101];
   int i, j;
   scanf("%s\n%s", a, b);
   for (i = 0; i < strlen(a); i++)
   {
      for (j = 0; j < strlen(b); j++)
      {
         if (a[i] == b[j])
         {
            a[i] = '0';
            b[j] = '0';
         }
      }
   }
   for (i = 0; i < strlen(a); i++)
   {
      if (a[i] != '0')
      {
         printf("NO");
         return 0;
      }
   }
   printf("YES");

   return 0;
}