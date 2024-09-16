#include<stdio.h>
int main()
{
	char stg[100];
	int count=0,i;
	printf("Enter the string");
	gets(stg);
	for(i=0;stg[i]!='\0';i++)
	{
		char ch=stg[i];
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		{
			count++;
		}
	}
	printf("The no. of vowels in the string are : %d",count);
	return 0;
}