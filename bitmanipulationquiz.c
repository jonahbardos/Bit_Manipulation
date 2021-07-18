#include <stdio.h>
int ones(int num);

int main(){
    ones(1);
    ones(2);
    ones(3);
    ones(255);
    ones(7);
}


/**
 * Find the number of 1s in a binary representation of a number
 * assuming a byte
 * eg
 * ones(1) = 1
 * ones(2) = 2
 * ones(7) = 3
*/
int ones(int num){
    int counter = 0;
    for(int i=0; i<8; i++){
        if ((num & (1 << i)) != 0){
            counter++;
        }
    }
    printf("%d\n", counter);
    return counter;
}