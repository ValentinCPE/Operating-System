//
// Created by stephane on 13/09/18.
//


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* search_parameter(char* parameter) {
    extern char **environ;
    int count = 0;
    while(environ[count] != NULL)
    {
        char* arg_name = strtok(environ[count], "=");
        char* arg_value = strtok(NULL, "=");

        if (strcmp(parameter, arg_name) == 0) {
            return arg_value;
        }
        count++;
    }
    return NULL;
}


int main(int argc, char *argv[])
{

    if (argc <= 1) {
        printf("Not enough arguments");
        return 1;
    }

    char* parameter_found = search_parameter(argv[1]);
    printf("Looking for %s\n", argv[1]);
    if (parameter_found != NULL) {
        printf("Value is %s\n", parameter_found);
    } else {
        printf("not found\n");
    }

    return 0;
}




