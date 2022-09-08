#include <stdio.h>

int main()
{
   char s[51];
   int i, num = 0, cnt = 0;
   scanf("%s", s);
   for (i = 0; s[i] != 0; i++)
      if (s[i] > 47 && s[i] < 58)
         num = num * 10 + s[i] - '0';

   for (i = 1; i <= num; i++)
      if (num % i == 0)
         cnt++;

   printf("%d\n%d", num, cnt);
   return 0;
}