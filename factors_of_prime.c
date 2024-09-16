#include<stdio.h>

main(){
	int n,i,flag=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	
	for(i=2;i<n;i++){
		if(n%i==0){
			flag=1;
		}
	}
	
	if(flag==1){
		printf("Non-prime\n");
		printf("The factors are: ");
		for(i=2;i<n;i++){
			if(n%i==0){
				printf("%d ",i);
			}
		}
	}
	if(flag==0){
		printf("Prime");
	}
	
	return 0;
}