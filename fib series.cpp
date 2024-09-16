/*Write a function to print Fibonacci series using recursion*/
#include<stdio.h>
void fibseries(int n);
int main()
{
	int n;
	printf("enter no. of elements: ");
	scanf("%d",&n);
	printf("0\t1\t");
	fibseries(n-2);
	
	return 0;
}
void fibseries(int n)
{
   int first=0,second=1,third;
	
	if(n>0)
	{
		third=first+second;
		first=second;
		second=third;
		printf("%d\t",third);
		fibseries(n-1);
	}
	
	
	
}
