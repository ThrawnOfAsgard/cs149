#include <stdio.h>

int main(void) {
   int userNum;
   
   printf("Enter integer:\n");
   scanf("%d", &userNum);
   /* Type your code here. */
   printf("You entered: %d\n", userNum);
   printf("%d squared is %d\n", userNum, userNum * userNum);
   printf("And %d cubed is %d!!\n", userNum, userNum * userNum * userNum);

   int anotherNum;
   printf("Enter another integer:\n");
   scanf("%d", &anotherNum);
   printf("%d + %d is %d\n", userNum, anotherNum, userNum + anotherNum);
   printf("%d * %d is %d\n", userNum, anotherNum, userNum * anotherNum);

   return 0;
}