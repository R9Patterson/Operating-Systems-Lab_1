#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    
    //creates a pointer to a file
    //argv at index 2 awaits text file input to be specified last 
    //in the command line entry
    FILE *pToFile = fopen(argv[1], "r"); 
    
    int line = 0;
    char single;
    
    /*
        Next add the switch statement to filter through each
        flag command line input [c,l,w]
    */
    
   while( (single = fgetc(pToFile) ) != EOF) {
       
        printf("%c",single);
    }
    
    printf("\n\nEnd Of Program\n");
    
    fclose(pToFile);//closes file pointer
    
    return 0;
}