// PRE-PROCESSORS
// Performs before compilation
// (#) - preprocesor directive

#include <stdio.h>
// MACRO is equivalent to a lambda in Python
#define MIN(a, b) a > b ? b : a
#define MAX(a, b) a > b ? a : b
#define SWAP(a,b) a^=b; b^=a; a^=b; // multiple statements require semi-colons

// Directives for pre-processors


// Conditional Compilation using ifdef endif
#define VER1
#define VERSION 6

int main(){
    int i = 70;
    int j = 80;
    printf("%d\n", MIN(i,j));
    printf("%d\n", MAX(i, j));

// If macro VER1 is defined the lines of code between will run
// and be included in the compilation exe
// If macro not defined. This code will not run.
// Reduces the amount of instructions to be run.
#ifdef VER1
    printf("This is only for version 1\n");
#else
    printf("Version 1 macro is not defined.\n");
#endif

// #undef VERSION == This undefines a defined preprocessor keywords
#if VERSION == 5
    printf("This is version 5\n");
#elif VERSION ==6
    printf("This is version 6\n");
#else
    #error "Please provide the macro VERSION"
#endif

    // PRE-DEFINED MACROS
    printf("%s\n", __DATE__);
    printf("%s\n", __TIME__);
    printf("LINE :%d\n", __LINE__);

    return 0;
}