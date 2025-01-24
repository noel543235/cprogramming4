#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("hello.txt", "r");
   
    char myString[100];
    if(fptr != NULL){
        while(fgets(myString, 100,fptr)){
            printf("%s", myString);
        }
    }
    
    fclose(fptr);

    return 0;
}