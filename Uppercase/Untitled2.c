#include <stdio.h>

int main(){
	
	char ch ;
	
	printf("\nEnter an uppercase character: ");
	scanf("%c",&ch);
	char lch = ch + 32 ;
	
	if(ch>=65 && ch<=90){
		
		printf("You entered an uppercase %c",lch);
	}
	
	if(ch>=97 && ch<=122){
		printf("\nTry using the shift key! I want capital a capital letter");
		
	}
	if(ch<65 || ch>90 && ch<97){
		printf("\nYou did not enter a letter.");
		
	}

	return 0;

	
}
