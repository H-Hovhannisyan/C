#include <stdio.h>
int main(){
	int size=0;
	printf("Enter Lenaght Array ");
	scanf("%d",&size);
	char arr[size+1];
	printf("Enter a Character Array ");
	scanf("%s", arr);
	int i;
	for(i=size;i>=0;--i){
		printf("%c",arr[i]);
	}



}
