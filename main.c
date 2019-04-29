#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void rotate(char *message, int key);
void derotate(char *message, int key);
void subcipher(char *message, char *Key);
void desubcipher(char *message, char *Key);

 int main() {
    
    char message[1000];
    int key;  //initialise variables and message
    char Key[] = {"QWERTYUIOPASDFGHJKLZXCVBNM "};  // key array
    int programSelection; // is an integer that receives an int from 1 to 4 and determines the program that will run in the switch case. 
    
    
    printf("Press 1 for rotation cypher\nPress 2 for rotation encryption\nPress 3 for substitution cypher\nPress 4 for substitution encryption\n ");
    scanf("%d", &programSelection); // receives the integer determining which program will run in the switch case.
    
    switch(programSelection) {
        
        case 1:

            printf("You selected rotation cypher\n" );   
            printf("Please enter your message for ciphering: ");
            scanf("%s/n", message); // receives user-input of the message they would like ciphered
            printf("please enter the key: ");
            scanf("%d", &key);
            
            rotate(message, key);
            
            break; // exits program
             
        case 2:
   
            printf("You selected rotation encryption\n" );
            
            printf("Please enter your message for ciphering: ");
            scanf("%s/n", message); // receives user-input of the message they would like ciphered
            printf("please enter the key: ");
            scanf("%d", &key);
            

            derotate(message,  key);
            
            break; // exits program
             
        case 3:
        
        
            printf("you selected substitution cypher\n" );
            printf("Enter message for Sub ciphering: ");
            scanf("%s", message); // scans the user inputted message. 
            
            subcipher(message, Key);
             break; // exits program
         
        case 4:
        
    
                 
            printf("You selected substitution encryption\n" );            
            printf("Enter message for Sub deciphering: ");
            scanf("%s", message);// scans the user inputted message. 
            
            desubcipher(message, Key);
            break; // exits program
         
        default:
            printf("invalid number please re-run program\n" ); // prints this messag eif the user inputs a wrong number to select program
    }
}

        /* The rotation cipher receives an inputted message and key by the user. The program then analyses every individual letter
            and incriments it's ascii value by the value of the key, in order to 'rotate' each letter. */
void rotate(char *message, int key) {
    int i;
    for(i = 0; i < strlen(message); i++) { // i is initialised as 0. The for loop continues as long as i is shorter than the message. i is incrimented at teh end of each completion
                if (message[i] == 32){ // this if statement checks for spaces in the code. if it locates one, it incriments i to the next letter and the ciphering continues. 
                    i++; //incriments i
                }
                message[i] = message[i] + key;  //this is how the code is incripted. the message at the point i = the message at point i PLUS the value of the key, rotating that point to it's new letter. 
            }
            printf("Rotation Cipher Results: %s\n", message); //prints ciphered message.
    
}


        /* The rotation decription receives an inputted message and key by the user. The program then analyses every individual letter
            and de-incriments it's ascii value by the value of the key, in order to 'rotate' each letter back to what the letter should be */     
void derotate(char *message, int key) {
    int i;
    for(i = 0; i < strlen(message); i++) { // i is initialised as 0. The for loop continues as long as i is shorter than the message. i is incrimented at teh end of each completion
                if (message[i] == 32){ // this if statement checks for spaces in the code. if it locates one, it incriments i to the next letter and the ciphering continues. 
                    i++; //incriments i
                }
                message[i] = message[i] - key;  //index of message = index of message + key. This is the actual encryption
            }
        
            printf("Rotation Cipher Results: %s\n", message); //prints remaining message.
}

/* the program receives a user inputted message they would like encrypted. The program then determines where each letter in the message is
            on the alphabet array and swaps each individual letter for it's corresponding letter in a key array*/
void subcipher(char *message, char *Key) {
    int length = strlen(message); // determines the length of the message
    int j = 0;
    int i = 0;
    char alphabetArr[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ "};  // alphabet array
            
            while ( j <= 27 && i <= length ){ // the program runs in the while loop as long as the index counter j is less than 27 (as it counts the alphabet) and index counter i is less than the length of the message
                if (message[i] == alphabetArr[j]){ // checks if the letter in message at i is equal to the letter in the alphabet at j
                    message[i] = Key[j];    // if so it makes the letter in the message at i equal to the letter in the key at j
                    i++; // incriments i
                    j = 0; // sets j to equal 0 so it can re-start counting the alphabet and key for next letter in message
                }
                j++; // incriments j
            }
            printf("ciphered message: %s\n", message);
}

    /* the program receives a user inputted message they would like decrypted . The program then determines where each letter in the message is
            on the key array and substitutes each individual letter for it's corresponding letter in a alphabet array*/  
void desubcipher(char *message, char *Key) {
    int length = strlen(message);// determines the length of the message
    int i = 0;
    int j = 0;
    char alphabetArr[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ "};  // alphabet array    
            
            while ( j <= 27 && i <= length ){  // the program runs in the while loop as long as the index counter j is less than 27 (as it counts the alphabet) and index counter i is less than the length of the message
                if (message[i] == Key[j]){ // checks if the letter in message at i is equal to the letter in the key at j
                    message[i] = alphabetArr[j]; // if so it makes the letter in the message at i equal to the letter in the alphabet at j
                    i++;// incriments i
                    j = 0; // sets j to equal 0 so it can re-start counting the alphabet and key for next letter in message
                }
                j++; // incriments j
            }
            printf("ciphered message: %s\n", message);   
}




