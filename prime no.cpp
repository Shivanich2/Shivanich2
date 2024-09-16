#include<stdio.h>
int main()
{
	char c;
	int i,capital=0,small=0,digits=0;
	while(1)
	{
		scanf("%d",&c);
		if(c>=65&&c<=89)
		{
			capital=capital+1;
		}
		if(c>=97&&c<=122)
		{
			small=small+1;
		}
		if(c>=0&&c<=9)
		{
			digits=digits+1;
		}
		if(c=='*')
		{
			break;
		}	
		
	}
	printf("capital letter %d",capital);
	printf("small letter %d",small);
	printf("digits %d",digits);
	return 0;
}
	