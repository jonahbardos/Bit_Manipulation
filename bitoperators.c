/*         AND
        0  0 | 0
        0  1 | 0
        1  0 | 0
        1  1 | 1

            OR
        0  0 | 0
        0  1 | 1
        1  0 | 1
        1  1 | 1

           XOR
        0  0 | 0
        0  1 | 1
        1  0 | 1
        1  1 | 0

     << <number>  == <number> * 2 ** k 
     >> <number> == <number> // 2 ** k (This is a power)

*/
#include <stdio.h>
#include <stdbool.h>
#define SWAP(a,b) a^=b; b^=a; a^=b; // multiple statements require semi-colons

bool getBit(int num, int i);
int main(){
   int a = 0x04;
   a = a >> 2;
   printf("value of a: %X [%x]\n",a,a);

   bool bitt = getBit(0xff, 7);
   printf(bitt ? "True" : "False");
   return 0;
}


// Checks to see if a bit is set.
// 0 == LSB and 7 == MSB
bool getBit(int num, int i){
   return ((num & (1 << i)) != 0);
}
