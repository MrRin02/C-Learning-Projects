//A program that outputs the limits for integer data types

#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(){
	


printf("Variables of type char store values from %d to %d\n ", CHAR_MIN , CHAR_MAX);
printf("Variables of type unsigned char  store values from 0 to %u\n ", UCHAR_MAX);
printf("Variables of type short store values from %d to %d \n", SHRT_MIN , SHRT_MAX);
printf("Variables of type unsigned short store values from 0 to %d\n" , USHRT_MAX);
printf("Variables of type int store values from %d to %d\n ", INT_MIN , INT_MAX);
printf("Variables of type unsigned int store values from 0 to %d \n", UINT_MAX);
printf("Variables of type long store values from %ld to %ld\n", LONG_MIN , LONG_MAX);
printf("Variables of type unsigned long store values from 0 to %lu\n ", ULONG_MAX);
printf("Variables of type long long store values from %lld to %lld\n ", LLONG_MIN , LLONG_MAX);
printf("Variables of type unsigned long long store values from 0 to %llu\n ",ULLONG_MAX);

return 0;




	
	
}
