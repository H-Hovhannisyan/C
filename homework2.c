#include <stdio.h>
/*int main (){
	int a = 0;
	printf("Enter a Year ");
	scanf("%d",&a);
	if (a%4==0 && a%100!=0 && a%400!=0){
		printf("The Year Is Last");
	
	}else{
		printf("The Year Is Not Last");
	}

}
*/
/*int main(){
	int num1 = 0;
        printf("Enter a Number ");
        scanf("%d",&num1);
	int num2 = 0;
        printf("Enter a Number ");
        scanf("%d",&num2);
	int num3 = 0;
        printf("Enter a Number ");
        scanf("%d",&num3);
	int sum=0;
	int x=0;
	if (num1<num2 && num1<num3){
		sum=num1;
	}else if (num2<num3 && num2<num1){
		sum=num2;
	}else{
		sum=num3;
	}
	for(int i = 1;i<=sum;i++){
		if (num1%i==0 && num2%i==0 && num3%i==0){
			x=i;
		}
	
	}
	printf("%d \n",x);
	


}*/
int main(){
	int a = 0;
        printf("Enter a Number ");
        scanf("%d",&a);
	if(a>>4==1){
		printf("Number ` %d \n ", a);
	
	}else{
		printf("Number ` %d \n",(1<<4)|a);
	
	
	}


}
