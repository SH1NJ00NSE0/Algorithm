#include <stdio.h>

int main()
{
   int s[101];
   int n, low=0, high=0, i;
   scanf("%d", &n);
   for (i = 0; i < n; i++)
   {
      scanf("%d", &s[i]);
      if (s[i] >= high)
         high = s[i];
      if (s[i] <= low || i == 0)
         low = s[i];
   }
   printf("%d", high - low);
   return 0;
}