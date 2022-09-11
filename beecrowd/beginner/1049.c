#include <stdio.h>
#include <string.h>

int main() {

    char animal[3][13];
    
    scanf("%s", animal[0]);
    scanf("%s", animal[1]);
    scanf("%s", animal[2]);

    if (strcmp(animal[0], "vertebrado") == 0) {

        if (strcmp(animal[1], "ave") == 0) {
            if (strcmp(animal[2], "carnivoro") == 0) printf("aguia\n");
            else printf("pomba\n");
        } else {
            if (strcmp(animal[2], "onivoro") == 0) printf("homem\n");
            else printf("vaca\n");
        }

    } else {

        if (strcmp(animal[1], "inseto") == 0) {
            if (strcmp(animal[2], "hematofago") == 0) printf("pulga\n");
            else printf("lagarta\n");
        } else {
            if (strcmp(animal[2], "hematofago") == 0) printf("sanguessuga\n");
            else printf("minhoca\n");
        }

    }

    
    
    




    return 0;
}