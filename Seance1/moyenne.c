//
// Created by valentin on 13/09/18.
//
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    double sum = 0;
    int nbNotes;

    char* erreur;

    if(argv[1] == NULL){
        printf("Aucune moyenne à calculer");
        return 0;
    }

    for(nbNotes = 1; nbNotes < argc; nbNotes++){

        long value = strtol(argv[nbNotes], &erreur, 10);

        if(*erreur != NULL || value < 0 || value > 20){
            printf("Note non valide");
            return 0;
        }

        sum += value;
    }

    printf("Moyenne est : %1.2f", sum/(nbNotes-1));

    return 0;
}

