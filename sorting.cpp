#include<stdio.h>
int main()
{
	int arr[]={1,0,1,1,0};
	int i,j,n=5,flag;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j+1]>=arr[j])
			{flag=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=flag;
			}
		}
		printf("%d\t",arr[j]);
	}
	return 0;
}