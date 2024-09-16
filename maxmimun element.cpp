#include<stdio.h>
int main()
{
	int i,arr[]={3,6,1,8,4},n=5;
	int max=arr[0];
	for(i=0;i<n;i++)
	{ if(arr[i]>max)
         { 
           max=arr[i];
		 }
	}
	printf("the maximum element of the array is %d",max);
	return 0;
}