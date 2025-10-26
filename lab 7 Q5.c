#include <stdio.h>
int main(){
	char str[100];
	int i;
	int count=0;
	printf("enter a string: ");
	scanf("%[^\n]", str);
	for(i=0; str[i]!='\0'; i++){
		if(str[i]==' ' || str[i]=='\t'|| str[i]=='\n'|| str[i]=='\f' || str[i]=='\r' || str[i]=='\v' ){
			count++;
		}
		
	}
	printf("number of whitespace counted: %d ", count );
	return 0;
}
