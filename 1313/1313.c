#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decompressRLElist(int* nums, int numsSize, int* returnSize){
    int i;
    *returnSize = 0;

    for (i = 0; i < numsSize; i +=2 ){
        *returnSize += nums[i];
    }

    int * d_list = malloc(*returnSize * sizeof(int));
    
    if  (d_list != NULL){
        int j, k;
        j = 0;

        for (i = 0; i < numsSize; i +=2 ){
            for (k = 0; k < nums[i]; ++k){
                d_list[j++] = nums[i+1];
            }
        }
    }

    return d_list;
}

int main(void){
    int returnSize = 0;
    int nums[] = {1, 2, 3, 4};
    int * d_list = decompressRLElist(nums, 4, &returnSize);

    int i;

    for(i = 0; i < returnSize; i++){
        printf("%d", d_list[i]);
    }

    return 0;
}