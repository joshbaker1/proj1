#include<stdio.h>
#include<stdlib.h>
#include<string.h>


 int main() {
    
    char message[1000];
    int key = 1;    //initialise variables and message
    int i = 0;  // index counter for the message array
    int j = 0;  // index counter for the alphabet and key arrays
    char alphabetArr[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ "};  // alphabet array
    char Key[] = {"QWERTYUIOPASDFGHJKLZXCVBNM "};  // key array        
    int length;  // an int that holds the length of the message array
    int programSelection;
    
    
    printf("Press 1 for rotation cypher\nPress 2 for rotation encryption\nPress 3 for substitution cypher\nPress 4 for substitution encryption\n ");
    scanf("%d", &programSelection); 
    
    switch(programSelection) {
        
        case 1:
        
            printf("You selected rotation cypher\n" );   
            printf("Please enter your message for ciphering: ");
            scanf("%s/n", message);
                    
            for(i = 0; i < strlen(message); i++) { // while the index is less than the length of the message then index++
                if (message[i] == 32){
                    i++;
                }
                message[i] = message[i] + key;  //index of message = index of message + key. This is the actual encryption
            }
            printf("Rotation Cipher Results: %s\n", message); //prints remaining message.
            break;
             
        case 2:
        
            printf("You selected rotation encryption\n" );
            char message[1000];
            
            printf("Please enter your message for ciphering: ");
            scanf("%s/n", message);
            
            for(i = 0; i < strlen(message); i++) { // while the index is less than the length of the message then index++
                if (message[i] == 32){
                    i++;
                }
                message[i] = message[i] - key;  //index of message = index of message + key. This is the actual encryption
            }
        
            printf("Rotation Cipher Results: %s\n", message); //prints remaining message.
            break;
             
        case 3:
        
            printf("you selected substitution cypher\n" );
            printf("Enter message for Sub ciphering: ");
            scanf("%s", message);
            
            length = strlen(message);
            
            while ( j <= 27 && i <= length ){
                if (message[i] == alphabetArr[j]){
                    message[i] = Key[j];
                    i++;
                    j = 0;
                }
                j++;
            }
            printf("ciphered message: %s\n", message);
             break;
         
        case 4:
        
            printf("You selected substitution encryption\n" );            
            printf("Enter message for Sub deciphering: ");
            scanf("%s", message);
            
            length = strlen(message);
            
            while ( j <= 27 && i <= length ){
                if (message[i] == Key[j]){
                    message[i] = alphabetArr[j];
                    i++;
                    j = 0;
                }
                j++;
            }
            printf("ciphered message: %s\n", message);   
            break;
         
        default:
            printf("invalid number please re-run program\n" );
    }
}


    
 

//_______________________________ROTATION ENCRYPTION____________________________
   /* void rotationCypher(char message[]) {   
        int i;
        int key = 1;    //initialise variables and message
        //char message[1000];
        
        printf("Please enter your message for ciphering: ");
        scanf("%s/n", message);
        
        for(i = 0; i < strlen(message); i++) { // while the index is less than the length of the message then index++
            if (message[i] == 32){
                i++;
            }
            message[i] = message[i] + key;  //index of message = index of message + key. This is the actual encryption
        }
        
        printf("Rotation Cipher Results: %s\n", message); //prints remaining message.
        
    }
} */

  //_______________________________ROTATION DECRYPTION____________________________ 
    /*int i;
    int key = 1;    //initialise variables and message
    char message[1000];
    
    printf("Please enter your message for ciphering: ");
    scanf("%s/n", message);
    
    for(i = 0; i < strlen(message); i++) { // while the index is less than the length of the message then index++
        if (message[i] == 32){
            i++;
        }
        message[i] = message[i] - key;  //index of message = index of message + key. This is the actual encryption
    }

    printf("Rotation Cipher Results: %s\n", message); //prints remaining message.
    
     return 0; 
} */

   
//_______________________________SUBSTITUTION ENCRYPTION____________________________     
    
   /* int i = 0;  // index counter for the message array
    int j = 0;  // index counter for the alphabet and key arrays
    char alphabetArr[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ "};  // alphabet array
    char Key[] = {"QWERTYUIOPASDFGHJKLZXCVBNM "};  // key array
    char message[1000];  
    int length;  // an int that holds the length of the message array
    
    printf("Enter message for Sub ciphering: ");
    scanf("%s", message);
    
    length = strlen(message);
    
    while ( j <= 27 && i <= length ){
        if (message[i] == alphabetArr[j]){
            message[i] = Key[j];
            i++;
            j = 0;
        }
        j++;
    }
    printf("ciphered message: %s\n", message);

    return 0;
} */

//_______________________________SUBSTITUTION DECRYPTION____________________________ 
    
   /* int i = 0;  // index counter for the message array
    int j = 0;  // index counter for the alphabet and key arrays
    char alphabetArr[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ "};  // alphabet array
    char Key[] = {"QWERTYUIOPASDFGHJKLZXCVBNM "};  // key array
    char message[1000];  
    int length;  // an int that holds the length of the message array
    
    printf("Enter message for Sub deciphering: ");
    scanf("%s", message);
    
    length = strlen(message);
    
    while ( j <= 27 && i <= length ){
        if (message[i] == Key[j]){
            message[i] = alphabetArr[j];
            i++;
            j = 0;
        }
        j++;
    }
    printf("ciphered message: %s\n", message);

    return 0; */
 



