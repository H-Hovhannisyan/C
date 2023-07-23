#include <stdio.h>
int main(){
	int size = 0;
	printf("Enter Lenght Array ");
	scanf("%d",&size);
	char arr[size+1];
	int i;
	printf("Enter a Character Array ");
	scanf("%s",arr);
	printf("Number Are` ");
	for(i=0;i<size;++i){
		if(arr[i]>='0'&& arr[i]<='9'){
			printf("%c ",arr[i]);
		}
	
	
	
	}


}
