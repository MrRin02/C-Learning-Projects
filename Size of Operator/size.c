#include <stdio.h.>
/* Usage of sizeof
int main(){
	
	printf("%d", sizeof(int));
	return 0;
	
	
}

*/
//When we use sizeof ; use %u or %zu because they are for unsigned integers and when we use sizeof , output will be positive integer so you can't use %e or %le because output isn't floating number.

//my wrong code
/*
int main(){
	printf("Variable of type char occupy %d bytes\n", sizeof(char));
	printf("Variable of type short occupy %d bytes\n", sizeof(short));
	printf("Variable of type int occupy %d bytes\n", sizeof(int));
	printf("Variable of type long occupy %ld bytes\n", sizeof(long));
	printf("Variable of type long long occupy %lld bytes\n", sizeof(long long));
	printf("Variable of type float occupy %e bytes\n", sizeof(float));
	printf("Variable of type double occupy %le bytes\n", sizeof(double));
	printf("Variable of type long double occupy %lle bytes\n", sizeof(long double));
	
}
*/

//Correct version. Can also use %u instead of %zu but %zu would be more guarantee bcs its adaptive for systems bit capacity(32 or 64).
int main(){
	printf("Variable of type char occupy %zu bytes\n", sizeof(char));
	printf("Variable of type short occupy %zu bytes\n", sizeof(short));
	printf("Variable of type int occupy %zu bytes\n", sizeof(int));
	printf("Variable of type long occupy %zu bytes\n", sizeof(long));
	printf("Variable of type long long occupy %zu bytes\n", sizeof(long long));
	printf("Variable of type float occupy %zu bytes\n", sizeof(float));
	printf("Variable of type double occupy %zu bytes\n", sizeof(double));
	printf("Variable of type long double occupy %zu bytes\n", sizeof(long double));
	return 0;
}
