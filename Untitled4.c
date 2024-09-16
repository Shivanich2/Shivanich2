#include <stdio.h>
int main(){
	int num,reverse=0,n;
	printf("enter num");
	scanf("%d",&num);
	while(num!=0)
	{n=num%10;
	reverse=reverse*10+n;
	num=num/10;
	}
	printf("%d",reverse);
	if(num==reverse)
	{printf("number is palindrome");
	}
	
	return 0;

}