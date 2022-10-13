#include <stdio.h>

int frnd[1000][1000];
checkFrnd(int p1,int p2, int col, int row) // 번호1/번호2/열/행
{
   for(;;)
   {
      if (!frnd[col][row])//0이면
      {
         frnd[col][row]=p1;
         break;
      }
      else
      {
         row++;
      }
   }
   
}

int main()
{
   int stu, cple;
   int i, j;
   int a, b;
   scanf("%d %d", &stu, &cple);
   for (i = 0; i < cple; i++)
   {
      scanf("%d %d", &a, &b);
   }
   return 0;
}