#include<stdio.h>
 
int main() {
   int num1, num2;
 
   printf("Enter First Number : ");
   scanf("%d", &num1);
 
   printf("Enter Second Number : ");
   scanf("%d", &num2);
 
   num1 = num1 ^ num2;
   num2 = num1 ^ num2;
   num1 = num1 ^ num2;
 
   printf(" Numbers after Exchange : ");
   printf(" Num1 = %d and Num2 = %d", num1, num2);
 
   return 0;
}