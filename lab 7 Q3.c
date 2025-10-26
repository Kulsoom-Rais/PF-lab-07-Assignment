#include <stdio.h>
int main(){
	int arr[100];
	int i, N, j;
	printf("enter the size of array: ");
	scanf("%d", &N);
	for (i=0; i<N; i++){
		printf("enter the element: ");
		scanf("%d", &arr[i]);	
	}
	printf("repeated elements are: ");
	for( i=0; i<N; i++){
		for(j=0; j<i; j++){
			if(arr[i]==arr[j]){
				printf("\n num %d is repeated", arr[i]);
			}
		}
		
			}
	return 0;
}
