#include<stdio.h>
int main()
{
	int i,num=0;
	char str[100];
	printf("Enter the string to be printed in reverse");
	gets(str);
	for(i=0;str[num]!='\0';i++)
	{
		num++;
	}
	char *ptr=&str[num-1];
	while(ptr>=str)
	{
		printf("%c",*ptr);
		ptr--;
	}
	return 0;
}