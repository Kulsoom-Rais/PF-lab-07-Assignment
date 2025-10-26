#include <stdio.h>
int main(){
	int sum=0;
	int arr[8];
	int i;
	
	for(i=0; i<9; i++){
		printf("enter the numbers:");
		scanf("%d", &arr[i]);
		
		sum= sum+arr[i];
		
	}
	printf("sum is %d", sum);
	return 0;
}
