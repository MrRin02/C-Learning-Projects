#include <stdio.h>
#include <math.h>

//Integer version of remainder code

/*
int main(){
	
	int num1 , num2 ;
	printf("1-");
	scanf("%d",&num1);
	printf("\n2- ");
	scanf("%d",&num2);
	
	int rem = num1%num2;
	
	printf("remainder: %d", rem);
	
	return 0;
	}
	
	*/
	
//Finding remainder with non integer numbers

int main(){
	
	double num1 , num2 , remainder ;
	printf("Enter the first number: ");
	scanf("%lf",&num1);
	printf("\nEnter the second number:");
	scanf("%lf",&num2);
	
	remainder = fmod(num1 , num2);
	
	printf("Remainder: %lf", remainder);
	
	return 0;
	

}
