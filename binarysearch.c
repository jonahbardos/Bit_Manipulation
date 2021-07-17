#include <stdio.h>

int binarysearch(int *arr, int size, int target);


int main(){
    int sizee = 8;
    int arr[8] = {1,2,3,4,5,6,7,8};
    binarysearch(arr, sizee, 10);
}

int binarysearch(int *arr, int size, int target){
    int lower_bound = 0;
    int upper_bound = size - 1;

    while (lower_bound <= upper_bound){
        int middle_idx = (lower_bound + upper_bound) / 2;
        int middle_item = arr[middle_idx];

        if (middle_item == target){
            printf("Found Target %d\n", middle_item);
            return middle_item;
        }

        else if(middle_item > target){
            upper_bound = middle_idx - 1;
        }

        else {
            lower_bound = middle_idx + 1;
        }
    }

    printf("Target %d not found\n", target);
    return -1;
}