#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("hi.txt", "a");
    fclose(fptr);
    fptr = fopen("filename.txt", "w");
    fprintf(fptr, "\nHello Everybody");
    fclose(fptr);

    fptr = fopen("filename.txt", "r");
    char myString[100];
    if(fptr != NULL){
        while(fgets(myString, 100,fptr)){
            printf("%s", myString);
        }
    }
    
    fclose(fptr);

    return 0;
}