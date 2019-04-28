#include<stdio.h>
#include<stdlib.h>
#include<string.h>


 int main() {
    
   
   /* FILE *rotCyph;
    FILE *subCyph;
    FILE *encryptOutput;
    
    rotCyph = fopen("rotCyph.txt", "r");
    subCyph = fopen("subCyph.txt", " ");
    
    //int rotationCypher(int key, message);
    
    //int rotationEncryption(int key, message);
    
    //int substitutionCypher(message);
    
    //int substitutionEncryption( message);
    
    
    printf("Press 1 for rotation cypher\nPress 2 for rotation encryption\nPress 3 for substitution cypher\nPress 4 for substitution encryption\n ");
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
    } */
    
 

//_______________________________ROTATION ENCRYPTION____________________________
   /* int i;
    int key = 1;    //initialise variables and message
    
    char message[] = "ABCDEFGHIJKLMNOP";
    printf("%s", message);  //prints message without encryption
    
    for(i = 0; i < strlen(message); i++) { // while the index is less than the length of the message then index++
        message[i] = message[i] + key;  //index of message = index of message + key. This is the actual encryion
    }
    
    printf(": %s\n", message); //prints remaining message.
    
     return 0; */

  //_______________________________ROTATION DECRYPTION____________________________ 

   
//_______________________________SUBSTITUTION ENCRYPTION____________________________     
    int i = 0;  // index counter for the message array
    int j = 0;  // index counter for the alphabet and key arrays
    char alphabetArr[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ "};  // alphabet array
    char Key[] =         {"QWERTYUIOPASDFGHJKLZXCVBNM "};  // key array
    char message[] = {"HELLO WORLD"};  // hardcoded message
    int length;  // an int that holds the length of the message array
    
    //printf("string length: %d\n", length);
    printf("unciphered message: %s\n", message);
    //printf("ascii of first letter: %d\n", message[i]);
    length = strlen(message);
    
    while ( j <= 27 && i <= length ){
        if (message[i] == alphabetArr[j]){
            //printf("i:%d %c ", i, message[i]);
            
            //printf("j:%d", j);
            message[i] = Key[j];
             
            //printf( "   %c\n", message[i]);
            i++;
            j = 0;
        } 
        j++;
    }

    printf("ciphered message: %s\n", message);

    return 0; 

}




