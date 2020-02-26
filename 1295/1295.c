#include <stdio.h>

int count_digits(int num);

int findNumbers(int* nums, int numsSize){
    int cnt = 0;
    for(int i = 0; i < numsSize; ++i){
        if (count_digits(nums[i]) % 2 == 0){
            ++cnt;
        }
    }
    return cnt;
}

int count_digits(int num){
    if (num == 0){
        return 1;
    }
    
    int cnt;
    for(cnt = 0; num > 0; num /= 10, ++cnt);

    return cnt;
}

int main(void){
    int nums[] = {12, 345};
    int cnt = findNumbers(nums, 2);
    printf("%d", cnt);
    
    return 0;
}