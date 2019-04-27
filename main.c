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

  /*_______________________________ROTATION DECRYPTION____________________________ 
    FILE *input;
    FILE *output;
    int letterCount = 0;
    //int temp;
    //int i = 1;
    //int mostUsedLetter = 0;
    
    //char letterArr[] = {"ABCDEFGHIIJKLMNOPQRSTUVWXYZ"};
 
    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");
   
    //while (i <= 26){
        while(feof(input) == 0) {
            char c;
            fscanf(input, "%c", &c);
         
            if(c == 'E') 
                letterCount++;
            fprintf(output, "%c",  c);
            
                //printf("1: %d\n", letterCount);
                //i++;
                //temp = letterCount; 
                
                //if (temp > mostUsedLetter)  
                //    mostUsedLetter = temp;}           
    }
    printf("E Count: %d\n", letterCount);  */
   
//_______________________________SUBSTITUTION ENCRYPTION____________________________     
    //int i;
    char letterArr[] = {"ABCDEFGHIIJKLMNOPQRSTUVWXYZ"};
    char subKey[] = {"QWERTYUIOPASDFGHJKLZXCVBNM"};
    int length;
    char message[] = {"HELLOWORLD"};
    //int count = 0;
    

    //printf("enter message for ciphering: \n");
    //gets(message);
    
    
    length = strlen(message);
    printf("string length: %d\n", length);
    printf("unciphered message: %s\n", message);

    int i = 0;
    printf("ascii of first letter: %d\n", message[i]);
    
    //for(int i = 0; i <= length; i++) { //ENCRIPTION BELOW
    int j = 0;
    while (j <= 26){
        if (message[i] == letterArr[j]){
            printf("found a letter\n");
            i++;
            j=0;
        }

        j++;
    }


        
        /*int j = 0;
        if (message[i] == letterArr[j]) {
            printf("test: %s\n", &message[i]);
            message[i] = subKey[j];
            j++;
        } else {
            j++;
        } */
    //} 
    printf("ciphered message: %s\n", message);
    
 
  
   
    
    //printf("Encrypted Message: %s\n", message); 
    
    return 0; 

}




