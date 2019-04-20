#include<stdio.h>
#include<stdlib.h>
#include<string.h>


 /*int main() {
    
   
    FILE *rotCyph;
    FILE *subCyph;
    FILE *encryptOutput;
    
    rotCyph = fopen("rotCyph.text", "r");
    subCyph = fopen("subCyph.text", " ");
    
    //int rotationCypher(int key, /*message*/);
    
    //int rotationEncryption(int key, /*message*/);
    
    //int substitutionCypher(, /*message*/);
    
    //int substitutionEncryption( /*message*/);

    
    
   /* printf("Press 1 for rotation cypher\nPress 2 for rotation encryption\nPress 3 for substitution cypher\nPress 4 for substitution encryption\n ");
    scanf("%d", &programSelection);
    
    switch(programSelection) {
        
        case 1:
            printf("You selected rotation cypher\n" );
            printf("%s\n", message);
            return 1;
            break;
             
        case 2:
            printf("You selected rotation encryption\n" );
            //do function
            break;
             
        case 3:
            printf("you selected substitution cypher\n" );
             //do function
             break;
         
        case 4:
            printf("You selected substitution encryption\n" );
            //do function         
            break;
         
        default:
            printf("invalid number please re-run program\n" );
    }
    
    
    
    
    
    char message[100];                                         the message that will be deciphered
    int i;                                                    itialise i which will be the index of the array letters
    int j = strlen(message);                                   setj to = the amount of characters in the array message

    scanf("%s", message);
    printf("Found text %s\n", message);
    printf("text length %d\n", &j);
    
    for(i = 0; i <= j; i++) {
        
    } 
 
  
} */


int main() {
    int i;
    int key = 1;    //initialise variables and message
    
    char message[] = "ABCDEFGHIJKLMNOP";
    printf("%s", message);  //prints message without encryption
    
    for(i = 0; i < strlen(message); i++) { // while the index is less than the length of the message then index++
        message[i] = message[i] + key;  //index of message = index of message + key. This is the actual encryion
    }
    
    printf(": %s\n", message); //prints remaining message.
    
    return 0;
}


