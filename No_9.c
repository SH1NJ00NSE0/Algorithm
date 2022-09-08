#include <stdio.h>
#include <string.h>

int n, i, sum;
int s[100];

int checkLower(int p, int q) //분노유발자면 1
{
   if (p>n)
   {
      return 0;
   }
   if (q > n - 1)
   {
      sum++;
      checkLower(p + 1, p + 2);
   }
   else if (s[p] < s[q])
   {
      checkLower(p + 1, p + 2);
   }
   else
   {
      return checkLower(p, q + 1);
   }
}

int main()
{
   scanf("%d", &n);
   for (i = 0; i < n; i++)
      scanf("%d", &s[i]);
   // for (i = 0; i < n; i++)
   //    sum += checkLower(i, i + 1);
   checkLower(0,1);
   printf("%d", sum);
   // printf("%d", checkLower(0, 1));
   return 0;
}