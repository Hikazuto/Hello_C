#include <stdio.h>  /* Include information about standard library */

// Define a function named main that receives no argument values
int main()  /* Every C programs are started in main() function */
{           /* 
             * Every function in C are started with "{" and closed with "}"
             * called statement grouping (Curly braces "{}")
             */

    // Main calls function printf() from <stdio.h> library to print this sequence of characters
    printf("Hello World!!!\n"); 

    // C provides Escape Sequences
    /* Escape Sequence - Provides a general and extensible mechanism (represents only a single ASCII character)
                        for reprensenting hard-to-type or invisible characters

     \n for Newline             (ASCII value: 10)
     \t for tab                 (ASCII value: 9)
     \b for backspace           (ASCII value: 8)
     \" for double quote        (ASCII value: 34)
     \\ for backslash itself    (ASCII value: 92)
    */

    // You can also write this (it will produce the same output)
    printf("Hello ");
    printf("Wor");
    printf("ld!!!");
    printf("\n");

    /* 
     * The Compiler doesn't care how the program actually looks,
     * you take all over the control with the tools provide to you
     * 
     * NOTE:
     * You can have huge, bloat, hard to read programs (but have the exact same functionality)
     * to those small, compact, easy to understand programs
     * 
     * You the one who having the control, therefore,
     * You the one who take the responsibility for the code you wrote 
     * 
     * However, everyone have their own preffered style
     * Pick and develop that suits you the most
     */

    // Exercise 1.1
    "Hello World"; /* This line produce a bug (There's no output at runtime) although the program compiled sucessfully */

    // Exercise 1.2
    printf("\c"); /* Error at compilation (unknown escape sequence: '\c') */
}