#include <stdio.h>

int main()
{
   int a, b, age;
   char sex;

   scanf("%d-%d", &a, &b);
   if (b / 1000000 <= 2)
      age = 120 - (a / 10000);
   else
      age = 20 - (a / 10000);
   if (b / 1000000 % 2 == 0)
      sex = 'W';
   else
      sex = 'M';
   printf("%d %c", age, sex);

   return 0;
}