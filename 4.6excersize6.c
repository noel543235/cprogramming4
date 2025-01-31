#include <stdio.h>
#include <stdlib.h>

int main(){
   int students;
   printf("enter nnum students");
   scanf("%d", &students);
    int *p = malloc(students*4);

    for(int i = 0; i < students; i++){
        printf("enter score");
        scanf("%d", &p[i]);
    }

    FILE *fptr;
   
    fptr = fopen("scores.txt", "w");

    for(int i = students; i >= 0; i--){
        fprintf(fptr,"score: %d", p[i]);
    }

    fclose(fptr);
    return 0;
}