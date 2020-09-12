#include <stdio.h>

int main()
{
    FILE * FilePtr; //Initializes a file pointer
    FilePtr = fopen("Combinations.txt", "w");   //Creates a file to store all the combinations

    char CharArr[61] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    //Used to contain every upper case char, lower case char, and digit
    
    for (int i=0; i<61; i++) {  //First loop to loop through the character array and set that as the first character
        char char1 = CharArr[i];
        
        for (int j=0; j<61; j++) {  //Second loop to loop through the character array and set that as the second character
            char char2 = CharArr[j];
            
            for (int k=0; k<61; k++) {  //Third loop to loop through the character array and set that as the third character
                char char3 = CharArr[k];
                
                for (int l=0; l<61; l++) {  //Fourth loop to loop through the character array and set that as the fourth character
                    char char4 = CharArr[l];
                    
                    fprintf(FilePtr, "%c%c%c%c\n", char1, char2, char3, char4); //Writes the current combination to the file
                }
            }
        }
    }

    return 0;
}
