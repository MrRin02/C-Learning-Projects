#include <stdio.h>
#include <limits.h>
int main(){
	
int input;
int num = INT_MAX;
printf("\nEnter an integer less than %ld: ", num) ;
scanf("%d",&input);

if(input%2==0){
	printf("\nThe number %ld is even",input);
	
	if((input/2==0)%2==0){
		printf("\nAlso half of the %ld is even",input);
		printf("\nThats interesting isn't it?");
		
	}
	
	
	}
	
else{
	
	printf("\nThe number %ld is odd",input);
	
	
}
return 0;
}

