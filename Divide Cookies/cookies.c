#include <stdio.h>
int main(){

int cookies = 45 ;
int childeren = 7;
int div = cookies / childeren ;
int remainder = cookies - div * childeren ;

printf("You have %d childeren and %d cookies.\nGive each child %d cookies.\There are %d cookies left.", cookies , childeren, div , remainder);

return 0;
}
