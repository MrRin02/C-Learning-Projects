#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>


//VCHPRZGJNTLSKFBDQWAXEUYMOI --> key example


int main(){
int i;
int choice;
int seen[26] = {0};
char key[27] ;
char enc_msg[102];
char dsc_msg[102];
int j;
printf("-MAIN MENU-");
printf("\n\nEnter the key:");
scanf("%26s",key);

if(strlen(key)!= 26){
	
	printf("ERROR: Key must contain 26 characters.");
	
}

for(i = 0; i<26;i++){
	if(!isalpha(key[i])){
		printf("ERROR: Key must contain only alphabetic characters.");
		return 1;
	}

 char c = tolower(key[i]);

        int index = c - 'a';

        
        if (seen[index] == 1) {
            printf("ERROR: Key must not contain repeated characters!\n");
            
            return 1;
            
        }

        seen[index] = 1;
    }
        printf("\nWelcome! What you want to do?");
        printf("\n[1]Enrypt Message");
        printf("\n[2]Decrypt Message");
        printf("\n[3]Exit\n");
        
        scanf("%d",&choice);
        while (getchar() != '\n');
        
        switch(choice){
        	
        	case 1:
        		printf("Enter a plain text (max 100 characters): ");
        		fgets(enc_msg ,sizeof(enc_msg),stdin);
        		
        		
        		if(strchr(enc_msg, '\n') ==NULL){
        			printf("ERROR: Message must not be longer than 100 character!");
        			while (getchar() != '\n');
        			return 1;
				}
				
				enc_msg[strcspn(enc_msg, "\n")] = '\0';
				
				printf("Message succesfully entered.: %s\n", enc_msg);
				
				for(i=0;enc_msg[i]!='\0';i++){
					if(isupper(enc_msg[i])){
						int index_2 = enc_msg[i] - 'A';
						enc_msg[i] = toupper(key[index_2]);
					}
					else if(islower(enc_msg[i])){
						int index_2 = enc_msg[i] - 'a';
						enc_msg[i] = tolower(key[index_2]);
					}
						
				}
				printf("Encrypted message: %s\n",enc_msg);
				
				break;
        	
        	case 2:
        		printf("Enter a cipher text (max 100 characters):");
        		
        		fgets(dsc_msg ,sizeof(dsc_msg),stdin);
        		
        		if(strchr(dsc_msg , '\n') == NULL){
        			printf("ERROR: Message must not be longer than 100 character!");
        			while (getchar() != '\n');
					return 1;
				}
				dsc_msg[strcspn(dsc_msg, "\n")] = '\0';
				
				printf("Message succesfully entered. ");
				
				for(i=0;dsc_msg[i]!='\0';i++){
					if(isalpha(dsc_msg[i])){
					char looked_for = tolower(dsc_msg[i]);
					int index_4 = -1;
					
					for(j=0;j<26;j++){
						if(tolower(key[j])==looked_for){
							
							index_4 = j;
							break;
						}
					}
					if(isupper(dsc_msg[i])){
						dsc_msg[i] = 'A' + index_4;
					}
					else{
						dsc_msg[i] = 'a' + index_4;
					}
					}
					
				}
				
				printf("\nDecrypted message: %s ", dsc_msg);
				break;
        	case 3:
        		printf("Exiting the program...");
        		break ;
        	default:
        		printf("Invalid Choice!");
        		
		}
        
        

    return 0;
    }

    


