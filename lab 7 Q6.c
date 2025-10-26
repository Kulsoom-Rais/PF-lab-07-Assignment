#include <stdio.h>
int main(){
	int i, arr1[5], arr2[5], merged[10];
	
		printf("input 5 numbers: \n");
		for(i=0; i<5;i++){
		scanf("%d", &arr1[i]);
		
	}
	
		printf("enter another 5 numbers: \n");
		for(i=0; i<5; i++){
		scanf("%d", arr2[i]);
		
	}
	for(i=0; i<5; i++){
		merged[i]=arr1[i];
		
	}
	for(i=0; i<5; i++){
		merged[i+5]=arr2[i];
		
	}
	printf("merged array: \n");
	for(i=0;i<10;i++){
		printf("%d", merged[i]);
	}
	printf("\n");
	return 0;
}

