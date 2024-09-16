#include<stdio.h>
int main()
{
	int a=87;
	int *ptr=&a;
	printf("value of a is %d\n",*ptr);
	printf("value of a is %d\n",a);
	printf("address of a is %d\n",ptr);
	printf("address of a is %d\n",&a);
	printf("address of pointer is %d",&ptr);
	return 0;
}