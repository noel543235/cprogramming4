#include <stdio.h>

int main(){
    FILE *fptr;
   
    fptr = fopen("hello.txt", "w");
    fprintf(fptr, "\nHello");
    fprintf(fptr, "\nHow are you?");
    fprintf(fptr, "\nMy name is");
    fprintf(fptr, "\nWhars your name?");
    fclose(fptr);

    

    return 0;
}