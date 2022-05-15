#include <stdio.h>  /* Include information about standard library */

// Define a function named main that receives no argument values
int main()  /* Every C programs are started in main() function */
{           /* Every function in C are started with "{" and closed with "}" (Curly bracers "{}") */

    // Main calls function printf() from <stdio.h> library to print this sequence of characters
    printf("Hello World!!!\n"); 

    // C provides Escape Sequences
    /* Escape Sequence - Provides a general and extensible mechanism (represents only a single ASCII character)
                        for reprensenting hard-to-type or invisible characters

     \n for Newline
     \t for tab
     \b for backspace
     \" for double quote
     \\ for backslash itself
    */

    // You can also write this (it will produce the same output)
    printf("Hello ");
    printf("World");
    printf("!!!");
    printf("\n");

    // Exercise 1.1
    "Hello World"; /* This line produce a bug (There's no output at runtime) although the program compiled sucessfully */

    // Exercise 1.2
    printf("\c"); /* Error at compilation (unknown escape sequence: '\c') */
}