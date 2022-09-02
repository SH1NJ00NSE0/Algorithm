#include <stdio.h>

void f(int n)
{
   if (!n) return;
   f(n / 2);
   printf("%d", n % 2);
}

int main()
{
   int dec;
   scanf("%d", &dec);
   f(dec);
   return 0;
}