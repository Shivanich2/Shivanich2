#include<stdio.h>
int main()
{
	char str[100];
	printf("enetr string: ");
	gets(str);
	int i=0,largest=0,smallest=100,lar_index=0,small_index=0,pst=0;
	while(1)
	{
		if (str[i]==" "||str[i]=='\0')
		{
			if(pst>largest)
			{
				largest=pst;
				lar_index=i-pst;
			}
			if (pst<smallest)
			{
				smallest=pst;
				small_index=i-pst;
			}
			pst=0;
		}
		else
		{
			pst++;
		}
		if(str[i]=='\0')
		{
			break;
		}
		i++;
	}
	int p=0,s=0;
	char lar_word[100],small_word[100];
	for(i=lar_index;i<lar_index+largest;i++)
	{
		lar_word[p]=str[i];
		p++;
		printf("%c",str[i]);
	}
	for(i=small_index;i<small_index;i++)
	{
		small_word[s]=str[i];
		s++;
	}
	printf("smallest word=%s\n largest word=%s",small_word,lar_word);
	return 0;
}