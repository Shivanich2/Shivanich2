#include<stdio.h>
void swap(int,int);
int main()
{
	int num1=24,num2=01;
	printf("The numbers before swapping are: %d , %d\n",num1,num2);
	swap(num1,num2);
	printf("after swap:num1=%d,num2=%d\n",num1,num2);
	return 0;
}
void swap(int num1,int num2)
{
	int fg=num1;
	num1=num2;
	num2=fg;
	printf("The numbers after swapping are: %d , %d\n",num1,num2);
	
}