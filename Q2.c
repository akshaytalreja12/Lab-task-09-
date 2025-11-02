#include <stdio.h>
int main(){
	int a,b,c,d;
	printf("Enter the Number to check it is prime or not :  ");
	scanf("%d",&a);
	if (a<=1){
		printf("The number %d is not prime",a);
		
	}
	else if (a==2){
		printf("The number %d is prime ",a);
		
	}
	for(b=2;b<=a;b++){
		if (a%b==0){
			printf("THe number %d is not prime",a);
			break;
		}
		else if (a>3 && a%3==0){
			printf("The number %d is not prime",a);
			break;
		}
		else {
			printf("THe number %d is prime",a);
			break;
		}
	}
}
