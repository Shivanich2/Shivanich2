#include<stdio.h>
int main()
{
	char str[100];
	int smallest,largest,i=0,j,len=0,words;
	printf("enter the string");
	gets(str);
	printf("enter the no. of words");
	scanf("%d",&words);
	for(i=0;i<words;i++)
	{
		for(j=0;str[i][j]<='\0';j++)
		{
			len++;
		}
		printf("length of word at index %d is %d\n",i,len);
	}
	return 0;
	
	
}