#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("other.txt", "r");
   
    fseek(fptr, 0, SEEK_END);
    printf("%ld", ftell(fptr));
    fclose(fptr);

    return 0;
}