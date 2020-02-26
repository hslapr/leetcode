#include <stdio.h>
#include <stdlib.h>

char * defangIPaddr(char * address){
    char c = address[0];
    int len = 0;

    while(c != '\0'){
        c = address[++len];
    }

    char * defanged = (char *)(malloc(len+7));

    int i, j;
    i = j = 0;
    
    while (i <= len){
        if (address[i] == '.'){
            defanged[j++] = '[';
            defanged[j++] = '.';
            defanged[j] = ']';
        } else {
            defanged[j] = address[i];
        }
        ++i, ++j;
    }
    
    return defanged;
}

int main(void){
    char * address = "1.1.1.1";
    printf("%s", defangIPaddr(address));
}