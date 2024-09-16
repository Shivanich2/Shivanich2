#include<stdio.h>
int main()
{
	char str1[20],str2[20];
	int flag=0,i;
	int strcompare(char str1[],char str2[]);
	printf("enter first string to compare");
	scanf("%s",str1);
    printf("enter second string to compare");
	scanf("%s",str2);
	flag=strcompare(str1,str2);
	if(flag=1)
	{ 
	 printf("the strings are same");
	}
	else
	{ 
	 printf("strings are not same");
	}
	return 0;
}
int strcompare(char str1[],char str2[]);
int flag=0,len1=0,len2=0,i;
for(i=0;str1[i]!='\0'; i++)
{
	len1++;
}
for(i=0;str2[i]!='\0'; i++)
{
	len2++;
}
if(len1==len2)
{
	flag=1;
}


