#include <stdio.h>
#include <string.h>

int main(){
    FILE* filePointer;

    char dataToBeRead[50];

    filePointer = fopen("GfgTest.c", "r");

    if(filePointer == NULL){
        printf("GfgTest.c couldnt be read due to an error");
    } else{
        printf("the file is now opened");
        char result1 [100];
        char result2 [100];

        if(filePointer != NULL){
        while(fgets(result1, 100,filePointer)){
            printf("%s", result1);
        }
    }
    if(filePointer != NULL){
       size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
    }
    fclose(filePointer);
    }
    return 0;
}