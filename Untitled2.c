#include <stdio.h>
#include <math.h>
int main(){
	int num,i,count=0,n,digit,sum=0,product=0,j;
	printf("enter the no.:");
	scanf("%d",&num);
	int originaln=num;
	printf("enter the no.of digits:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		count=count+1;
	}
	for(j=0;j<count;j++)
	{
		digit=num%10;
		product=pow(digit,n);
		sum=sum+product;
		num=num/10;
		
	}
	printf("sum is %d\n",sum);
	printf("num is %d\n",originaln);
	
	if(originaln==sum)
	{
		printf("It is an armstrong number");
	}
	else
	{
		printf("It is not an armstrong number");
	}
    
	return 0;
	
}