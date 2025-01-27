#include <stdio.h>
struct House {
    char address[50];
    int squarefeet;
    int numbedroom;
    int numbath;
    int price;

};
int main(){
    struct House house1 = {"232 school road chesterfield mo 55094", 234, 3, 4, 140000};
    struct House house2 = {"878 gator road orlando florida 67856", 687, 4, 5, 200000};
    struct House house3 = {"987 house manor road denver colorado", 343, 2, 4, 170000};
    printf("Address: %s Square Feet: %d Number of Bedrooms: %d Number of Bathrooms: %d Price: %d \n", house1.address, house1.squarefeet, house1.numbedroom, house1.numbath, house1.price);
    printf("Address: %s Square Feet: %d Number of Bedrooms: %d Number of Bathrooms: %d Price: %d \n", house2.address, house2.squarefeet, house2.numbedroom, house2.numbath, house2.price);
    printf("Address: %s Square Feet: %d Number of Bedrooms: %d Number of Bathrooms: %d Price: %d \n", house3.address, house3.squarefeet, house3.numbedroom, house3.numbath, house3.price);


    return 0;
}