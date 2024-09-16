#include <stdio.h>
int main(){
	int num,sum=0,n;
	printf("enter num");
	scanf("%d",&num);
	while(num!=0)
	{n=num%10;
	printf("%d",n);
	num=num/10;
	}
	
	return 0;

}