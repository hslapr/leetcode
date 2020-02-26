#include <stdio.h>
#include <string.h>

int numJewelsInStones(char * J, char * S){
    int len = (int)strlen(S);
    int i;
    int num = 0;

    for (i = 0; i < len; i++){
        if (strchr(J, S[i])){
            ++num;
        }
    }

    return num;
}

