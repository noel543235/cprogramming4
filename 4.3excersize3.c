#include <stdio.h>
#include <string.h>

int main(){
    FILE* filePointer;

    char dataToBeWritten[50] = "GeeksforGeeks- A computer science portal for geeks";
    char dataToBeWritten2[50] = "Genshin impact is a fun open world game";


    filePointer = fopen("GfgTest.c", "w");

    if(filePointer == NULL){
        printf("GfgTest.c file failed to open");
    } else{
        printf("file opened");

        if(strlen(dataToBeWritten) > 0){
            fprintf(filePointer, "//");
            fprintf(filePointer, dataToBeWritten);
            fputs(dataToBeWritten2, filePointer);
            fwrite(&dataToBeWritten, sizeof(dataToBeWritten), 1, filePointer);
        }
        fclose(filePointer);
    }
    return 0;
}