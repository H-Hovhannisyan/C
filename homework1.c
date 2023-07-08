#include <stdio.h>

/*int main (){
	char let = 0;
	printf("Enter a Letter ");
	scanf(" %c",&let);
	switch(let){
         case 97:
			printf("Letter is Vowels\n");
			break;
	
	 case 65:
                       printf("Letter is Vowels\n");
		       break;
 	 case 79:
                        printf("Letter is Vowels\n");
			break;

   	 case 111:
                        printf("Letter is Vowels\n");
			break;

    	 case 69:
                        printf("Letter is Vowels\n");
			break;

	 case 101:
                        printf("Letter is Vowels\n");
			break;

    	 case 73:
                        printf("Letter is Vowels\n"); 
			break;

     	 case 105:
                        printf("Letter is Vowels\n");
			break;
    
	 case 85:
                        printf("Letter is Vowels\n");
			break;

     
	 case 117:
                        printf("Letter is Vowels\n");
			break;
	default:
			printf("Letter is Consonant\n");
}


}
*/
/*int main (){
	int num1 = 0;
	int num2 = 0;
	printf("Enter a First Number ");
	scanf("%d",&num1);
	printf("Enter a Second Number ");
	scanf("%d",&num2);
	if (num1>num2){
		printf("Is a Large Number %d \n",num1);
	}else if(num2>num1){
		printf("Is a Large Number %d \n",num2);
	}else{
		printf("Number are even");

	}
	return 0;
}
*/
int main (){
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	printf("Enter a First Number ");
	scanf("%d",&num1);
	printf("Enter a Second Number ");
        scanf("%d",&num2);
	printf("Enter a Third Number ");
        scanf("%d",&num3);
	if(num1==num2 || num2==num3 || num1==num3){
		if(num1>num2 && num1>num3){
			printf("Is a Large Number %d \n",num1);

		}else if(num2>num1 && num2>num3){
			printf("Is a Large Number %d \n",num2);

		}else{
			printf("Is a Large Number %d \n",num3);

		}
	
	}else{
		printf("Enter a Number Again \n");
	}

		return 0;
}

