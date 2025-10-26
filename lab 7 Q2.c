#include <stdio.h>
int main(){
	int str[100];
	int n;
	int i;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	for (i=0; i<n; i++){
		printf("\n Enter number: ");
		scanf("%d", &str[i]);
	}
	printf("reversed array \n");
	for (i=n-1; i>=0; i--){
		printf("%d", str[i]);
		printf("\n");
	}
	printf("\n");
	return 0;
}
