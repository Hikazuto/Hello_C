#include <stdio.h>

// It's bad practice to bury "magic numbers" like 300 and 20 in a program
/* 
 * they convey little information
 * to someone who might have to read the program later
 * and they are hard to change in a systematic way
 */

// one way to deal with magic numbers is to give them meaningful names
#define name replacementText

// A #define line defines a symbolic name 
// or symbolic constant to be a particular string of characters

/* 
 * Any occurence of the name (not in quotes and not part of another name)
 * will be replaced by the corresponding replacement text
 * 
 * The name has the same form as a variable name
 * 
 * The replacement text can be any sequence of characters
 * not limited to numbers
 */

#define LOWER 0     /* lower limit of table */
#define UPPER 300   /* upper limit */
#define STEP 5      /* step size */

// Print Fahrenheit-Celcius table
int main()
{
    int fahr;

    printf("Fahr | Celcius\n");
    for ( fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("%4d | %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
    
}

// the quantities LOWER, UPPER, and STEP are Symbolic Constants, not Variables
// so they do not appear in Declarations

/* NOTE: Symbolic Constant names are conventionally written in UPPER CASE
 * so they can be readily distinguished from lower case Variable names
 * 
 * Notice that there is no semicolon (;) at the end of #define line
 */