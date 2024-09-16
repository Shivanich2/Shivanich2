#include<stdio.h>
int *larger(int *, int*);
int main()
{
	int a,b;
	printf("enter values to be compared");
	scanf("%d\t%d",&a,&b);
	int *result;
	result=larger(&a,&b);
	printf("the larger no. is %d",*result);
	return 0;
}
int *larger(int*a,int *b)
{
	if(*a>*b)
	{
		return a;
	}
	else
	{
	    return b;	
	}
	
}