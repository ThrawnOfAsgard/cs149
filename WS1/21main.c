#include <stdio.h>

int main(void) {

   /* Type your code here. */
   int userNum;
   int divNum;

   scanf("%d", &userNum);
   scanf("%d", &divNum);
   printf("%d %d %d\n", userNum/divNum, userNum/divNum/divNum, userNum/divNum/divNum/divNum);

   return 0;
}
