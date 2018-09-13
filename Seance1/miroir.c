//
// Created by valentin on 13/09/18.
//
#include <stdio.h>
#include <string.h>

int miroir(int argc, char *argv[]) {
    char* string = argv[1];
    for(int i = strlen(string)-1; i >= 0; i--){
        printf("%c",string[i]);
    }
    return 0;
}

