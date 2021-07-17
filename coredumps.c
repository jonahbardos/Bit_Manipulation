/**
 *                  Segmentation Fault/Core Dump
 * Occurs during Memory Access Violations (Doing something wrong with memory)
 * Accessing memory that does not belong to me.
 * Occurs:
 *      - Trying to write into Read-Only memory locations
 *      - Accessing freed (released) memory location
 *      - Stack Overflow
 *      - Improper usage of Scanf
 * 
 * 
 *                 Segmentation Fault
 * - Result of invalid memory access and cause a SIGINT signal that causes
 *   application to terminate
 *  
 *                  Core Dump
 * - A file that is written when an application crashes after a segmentation fault
 *  which is sent to the developer to analyze that state of the application at
 *  the time of the crash
*/

#include <stdio.h>

int main(void){
    // Writing to a read only memory raises a segmentation fault
    char *s = "Batman vs Superman";
    *s = 'H'; // causes a bus error. Process is trying to access memory that CPU cannot address

    // Another example
    int arr[10];
    arr[11] = 100;
    return 0;

    // Stack overflow
    // main(); constant recursion
}