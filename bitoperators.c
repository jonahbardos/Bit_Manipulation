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
#include <string.h>
#include <math.h>
#include <stdint.h>
#include <stdlib.h>
#define SWAP(a,b) a^=b; b^=a; a^=b; // multiple statements require semi-colons

// Function protypes tell the compiler what they return
bool getBit(int num, int i);
void checkAllBits(int num);
void returnBinaryRep(int num);
void convertToNum(char *arr, int sizee);
void swapBits(uint8_t* b);

int main(){
   int a = 0x04;
   a = a >> 2;
   printf("value of a: %X [%x]\n",a,a);

   bool bitt = getBit(0xff, 7);
   printf(bitt ? "True\n" : "False\n");
   checkAllBits(0xfe);
   returnBinaryRep(0xfe);

   char arr[8] = {'1', '1', '1', '1','1', '1', '1', '1'};
   convertToNum(arr, 8);

   uint8_t mypointer = 100;
   uint8_t *t = &mypointer;
   swapBits(t);
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


// Convert a binary string to number
void convertToNum(char *arr, int sizee){
   double summ = 0;
   for (int i = 0; i < sizee; i++)
   {  
      // printf("%c %f\n", arr[i], pow(2, sizee - 1 - i));
      if (arr[i] != '0'){
         summ += pow(2, sizee - 1 - i);
      }
   }
   printf("Sum = %f\n", summ);
}


/**
 * Swap 2 nibbles in a byte
 * (e.g) 0xCF -> Answer: 0xFC
*/
void swapBits(uint8_t* b)
{
   uint8_t *x;
   // *x = (*b & 0x0F); // Grab the last nibble (0x0F) and move it to be the MSB
   // *y = (*b & 0xF0); // Grab the first nibble (0xC0) and move it to the LSB
   *b = ((*b & 0x0F) << 4 | (*b & 0xF0) >> 4);
   printf("%d\n", *b);
}