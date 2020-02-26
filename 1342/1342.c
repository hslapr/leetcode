#include <stdio.h>

int numberOfSteps (int num){
    int step = 0;

    while (num > 0){
        if (num % 2 == 0){
            num >>= 1;
        } else {
            --num;
        }
        ++step;
    }

    return step;
}

int main(void){
    printf("%d", numberOfSteps(14));

    return 0;
}