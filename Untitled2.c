#include <stdio.h>

//A program that uses enumerations 

int main(){

enum days{
	monday = 1, tuesday , wednesday , thursday , friday , saturday, sunday
} today = wednesday , yesterday = today -1 , tomorrow = today + 1 ;


printf("Yesterday was the day #%d of the week\n", yesterday);
printf("Today is the day #%d of the week\n", today);
printf("Tomorrow will be the day #%d of the week\n",tomorrow);
printf("Sunday is the day #%d of the week\n",sunday);

return 0;

	
	
}
