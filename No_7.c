#include <stdio.h>

char *deleteSpace(char n[]) //공백제거함수 정의
{
   char *str = (char *)malloc(sizeof(&n)); // str에 에멀록으로 동적할당
   int i, k = 0;
   for (i = 0; i < strlen(n); i++) //입력받은 배열길이만큼 반복
      if (n[i] != ' ')             //공백이 아닌 문자만 입력받음
         str[k++] = n[i];          // str에 문자 넣은후 k에 1더하기
   str[k] = '\0';                  //마지막에 널문자 삽입
   return str;
}

int main()
{
   char s[101];
   int i;
   fgets(s, 101, stdin);
   for (i = 0; s[i]; i++) //소문자로 변환
      if ((s[i] >= 'A') && (s[i] <= 'Z'))
         s[i] = s[i] - 'A' + 'a';

   printf("%s", deleteSpace(s)); //공백제거후 출력
   return 0;
}