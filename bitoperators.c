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

     << <number>  == <number> * 2 
     >> <number> == <number> // 2

*/
#include <stdio.h>
int main(){
 int a = 0x04;
 a = a >> 2;
 printf("value of a: %X [%x]\n",a,a);

 return 0;
}
