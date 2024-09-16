#include<stdio.h>
int main()
{
	int arr[3][3];
	int i,j,sum=0,product=1;
	int choice;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			scanf("%d",&arr[i][j]);
			sum=sum+arr[i][j];
			product=product*arr[i][j];
		}
	}
    printf("choose operation to perform\n1.addition\n2.multiplication\n3.transpose");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1 :printf("sum is %d",sum);
		break;
		case 2 :printf("product is %d",product);
		break;
		case 3 :printf("transpose of matrix is\n ");
		        for(j=1;j<=3;j++)
	            {
		           for(i=1;i<=3;i++)
		          {
			        printf("%d\t",arr[i][j]);
		          }
		          printf("\n");
    	        } 
    	        break;
		        
		default:printf("invalid operator");
			
	}

	return 0;
		
}