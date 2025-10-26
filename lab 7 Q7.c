#include <stdio.h>
int main(){
	int arr[10];
	int i, target;
	for (i=0; i<10; i++){
		printf("enter you numbers: ");
		scanf("%d", &arr[i]);
	}
	printf("select your target number ");
	scanf("%d", &target);
	for(i=0; i<10; i++){
		if(target==arr[i]){
			printf("index %d", i);
		}
	}
	return -1;
}
