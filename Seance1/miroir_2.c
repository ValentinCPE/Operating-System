//
// Created by stephane on 13/09/18.
//

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int i;
    for (i=1;i<argc ; i++) {
        size_t word_len = strlen(argv[i]) - 1;
        while(word_len != -1){
            printf("%c", argv[i][word_len]);
            word_len--;
        }
        printf("\n");
    }
    return 0;
}


