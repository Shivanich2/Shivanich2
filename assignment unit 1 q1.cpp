#include<stdio.h>
int main()
{
	int i,j,rows,columns;
	printf("enter the no. of rows");
	scanf("%d",&rows);
	for(i=0;i<rows;i++)
	{
		for(j=0;j<2*rows-1;j++)
		{
			if(j>=i||j>=2*rows-i-1)
			{
				printf("*");
		    }  
			else
			{
			  printf("b");	
			}      
	    }
	    printf("\n");
    }
    return 0;
}