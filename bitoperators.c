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

// Function protypes tell the compiler what they return
bool getBit(int num, int i);
void checkAllBits(int num);
void returnBinaryRep(int num);

int main(){
   int a = 0x04;
   a = a >> 2;
   printf("value of a: %X [%x]\n",a,a);

   bool bitt = getBit(0xff, 7);
   printf(bitt ? "True\n" : "False\n");
   checkAllBits(0xfe);
   returnBinaryRep(0xfe);
   return 0;
}


// Checks to see if a bit is set.
// 0 == LSB and 7 == MSB
bool getBit(int num, int i){
   return ((num & (1 << i)) != 0);
}

// Checks all the bits that are set in a byte
void checkAllBits(int num) {
   printf("Checking all the bits in a byte\n");
   for(int i=0; i<8; i++){
      if ((num & (1 << i)) != 0){
         printf("Bit %d is set \n", i);
      }
   }
}

// Prints out the binary representation of a byte
void returnBinaryRep(int num){
   printf("Returning the Binary representation of %d\n", num);
   for(int i=7; i>=0; i--){
      if ((num & (1 << i)) != 0){
         printf("1");
      }
      else {
         printf("0");
      }
   }
   printf("\n");
}