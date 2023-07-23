#include <stdio.h>
int main(){
	int len = 0;
	printf("Enter Lenght ");
       	scanf("%d",&len);	
	int i;
	int j;
	for(i=0;i<len;i++){
		for(j=0;j<len;j++){
		if(i==0 || i==len-1 || j==0 || j==len-1){
			printf("* ");

		}else{
			printf("  ");
		}
	}
	printf("\n");
}	
}
