#include <stdio.h>
#include <string.h>

int n, i, sum;
int s[100];

int checkHeight(int p, int q) //분노유발자면 1
{
   //만약 cH(p,q+1)을 하다가 나보다 키큰애가 한명이라도 있으면 cH(p+1,p+2)호출
   //그러지 않고 q==n-1을 만족 할때 까지 위 조건을 안충족하면 분노유발자로 간주하고 sum++한 후, cH(p+1,p+2)

int main()
{
   scanf("%d", &n);
   for (i = 0; i < n; i++)
      scanf("%d", &s[i]);
   // for (i = 0; i < n; i++)
   //    sum += checkLower(i, i + 1);
   checkHeight(0, 1);
   printf("%d", sum);
   // printf("%d", checkLower(0, 1));
   return 0;
}