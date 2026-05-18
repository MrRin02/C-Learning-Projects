#include <stdio.h>
#include <ctype.h>
int main(){
char h_character;
char l_character;
printf("\nEnter an uppercase letter: ");
scanf("%c",&h_character);
if(isupper(h_character)){
l_character = tolower(h_character);
printf("\nYou enetered an uppercase %c",l_character);

}
else{

printf("\nYou did not enter an uppercase letter");
}

return 0;
}
