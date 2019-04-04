#include <stdio.h>
#include <string.h>


int main() {
    
//INITIALISATION and DECLARATION    
    //char letters[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};  
                                                              //initialise array of letters
    //int rotationkey = 1;                                      // set the "key" to = 1
    char message[100];                                        // the message that will be deciphered
    int i;                                                    //initialise i which will be the index of the array letters
    int j = strlen(message);                                  // sets j to = the amount of characters in the array message

    scanf("%s", message);
    printf("Found text %s\n", message);
    printf("text length %d\n", &j);
    
    for(i = 0; i <= j; i++) {
        
    }
  
 


  
}