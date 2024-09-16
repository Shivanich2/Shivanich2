#include<stdio.h>
int strcompare(char str1[100], char str2[100]);
int main()
{
 char str1[100], str2[100];
 int result;
 printf("Enter first string:\n");
 gets(str1);
 printf("Enter second string:\n");
 gets(str2);
 result= strcompare(str1, str2);
 if(result==0)
 {
    printf("strings are same");
 }
 else if(result==1)
 {
    printf("str1>str2");
 }
 else if(result==2)
 {
 	printf("str1<str2");
 }
 else
 {
 	printf("invalid input");
 }
 return 0;
 }
int strcompare(char str1[100], char str2[100])
{
int result,i, len1=0, len2=0;
for(i=0; str1[i]!='\0'; i++)
{
len1++;
}
for(i=0; str2[i]!='\0'; i++)
{
len2++;
}
if(len1==len2)
{
    return 0;
}
else if(len1>len2)
{
	return 1;
}
else
{
	return 2;
}
}