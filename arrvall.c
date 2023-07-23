#include <stdio.h>
int main(){
  int size=0;
  printf("Enter Lenght Array ");
  scanf("%d",&size);
  int arr[size];
  int i;
  for(i=0;i<size;++i){
  	printf("Enter a Number Array ");
	scanf("%d",&arr[i]);
  }
  for(i=0;i<size;++i){
  	printf("%d",arr[i]);
  }
}
