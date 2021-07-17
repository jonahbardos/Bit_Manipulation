#include <stdio.h>

int binarysearch(int *arr, int size, int target);
int interpolitansearch(int arr[], int numElem, int target);


int main(){
    int sizee = 8;
    int arr[8] = {1,2,3,4,5,6,7,8};
    // binarysearch(arr, sizee, 10);
    interpolitansearch(arr, 8, 100);
    return 0;
}

// O(log(n))
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


// O(log(log(n)))
/**
 * pos =  start + ( [ (end-start) / (A[end] - A[start]) ] * (target -A[start]) )
*/
int interpolitansearch(int arr[], int numElem, int target){
    int start = 0;
    int end = numElem - 1;
    int pos;
    
    // Exit Condition
    while ( start <= end         &&
            target >= arr[start] && 
            target <= arr[end])
    {
        pos = start + ( (end - start) / (arr[end] - arr[start]) * (target - arr[start]));

        if (arr[pos] == target){
            printf("Found target %d\n", target);
            return pos;
        }

        else if(arr[pos] > target){
            start = pos + 1;
        }

        else {
            end = pos - 1;
        }
    }
    printf("Did not Find target %d\n", target);
    return -1;
}
