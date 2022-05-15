#include <stdio.h>

                                    /* COMMENTS */
// and /*  */ are comments, comments will be ignored by the compiler
// you may use comments freely to make a program easier to understand 
// comments are usually used for good documentations by professionals

// is a Line Comment, any program or text after (//) within a line will be ignored by compiler
/* is a Block Comment, any program or text between it will be ignored by compiler
 * Block Comment may not be nested
 */

/*
NOTE: keep in mind to use comments concisely and necessarily
    (in a complicated program where comments make it easier to understand) 
* too much comments will make programs harder to read 
*/

// output the formula C = (5/9) * (F - 32)

int main()
{                              
                                    /* VARIABLES AND DATA TYPES */
    // Variables must be declared before used (at the beginning before any executable statements)
    // A Declaration announces the properties of variables (consist of type names and list of variables)


    /* Print Fahrenheit-Celcius table
     *  for fahr = 0, 20, ..., 300 */


    // This is called "Declaration statements" 
    int fahr, celcius;          /* fahr, celcius, lower, upper, etc are Variables */ 
    int lower, upper, step;     // int (integer) is the Properties or Data Types of the variables declared
                                // C provides several Data Types (See Introduction)


    // This is called "assignment statements" - which set ("assign") Variables to their initial values
    lower = 0;      /* Lower limit of the temperature table */
    upper = 300;    /* Upper limit */
    step = 20;      /* Step size */
    fahr = lower; /* Assign the value of the (fahrenheit) beginning of the temperature table as lower which is ( 0 ) */

    // these lines are to beautify the output (you should practice these too)
    printf("Fahr \t Celcius\n");
    printf("-------------------\n");


                                    /* LOOPING AND ITERARION */
    /*
     * The purpose of loop is to simplify the code written
     * when there's a bunch of program to compute in the same way
     * or when there's repeating pattern of code (occurences, equations, functions, etc)
    */

   // Instead of write this
    fahr = lower;

    celcius = 5 * (fahr - 32) / 9;
    printf("%d\t| %d\n", fahr, celcius);
    fahr = fahr + step;

    celcius = 5 * (fahr - 32) / 9;
    printf("%d\t| %d\n", fahr, celcius);
    fahr = fahr + step;

    celcius = 5 * (fahr - 32) / 9;
    printf("%d\t| %d\n", fahr, celcius);
    fahr = fahr + step;

    celcius = 5 * (fahr - 32) / 9;
    printf("%d\t| %d\n", fahr, celcius);
    fahr = fahr + step;

    celcius = 5 * (fahr - 32) / 9;
    printf("%d\t| %d\n", fahr, celcius);
    fahr = fahr + step;
    
    // It is way more efficient to write this
    fahr = lower;
    while (fahr <= upper) 
    {
        celcius = 5 * (fahr - 32) / 9;
        printf("%d\t| %d\n", fahr, celcius);
        fahr = fahr + step;
    }


    // This is known as "looping" or "Iteration"
    // There are 3 types of loops in C (while, for, do) *see Introduction and Looping


    /* The while loop operates as follows */
    fahr = lower;
    while (fahr <= upper) /* Test if (fahr "less than or equal to" upper) */
    {                  
        /* If true, the body (between curly braces) is executed */

        celcius = 5 * (fahr - 32) / 9;
        printf("%d\t| %d\n", fahr, celcius);
        fahr = fahr + step;

        /* 
         * Then, the condition is re-tested
         * if true, the body is executed again
         * Until false (fahr "greater than" upper), the loop ends 
         * The program exited the loop
        */
    }    

    /* 
     * NOTE: Indentation
     * Although the compiler do not care how the program looks
     * Always give proper indentation 
     * to emphasizes the logical structure of the program
     * 
     * Proper Indentations and spacing are CRITICAL
     * Which make programs easier to read and understand
     * 
     * It is recommended writing only one statement per line
     * and using blanks around operators to clarify grouping
     * (the position of braces is less important)
     */


                                        /* COMPUTATION */
    // Most of the work gets done in the body of the loop

    // The Celcius Temperature is computed 
    // and assigned to the Variable "Celcius" by the statement
    celcius = 5 * (fahr - 32) / 9;

    /* 
     * The reason for multiplying by 5 then dividing by 9 Instead of 5/9 is that in C,
     * integer division is truncates: any fractional part is discarded
     * Since 5 and 9 are integers, 5/9 would be truncated to zero (0)
     * and celcius will be reported as zero (0) 
     */

                                        /* OUTPUT */
    // printf is a General-purpose Output formatting function
    printf("a string of characters");
    printf("%d", fahr);
    printf("Fahr: %d \t Celcius: %d \n", fahr, celcius);

    /* 
     * It's first argument is a string of characters to be printed
     * with each (%) indicating where one of the other (second, third, ...)
     * arguments is to be substitued, and in what form to be printed
     * 
     * so the statements above cause two values 
     * (fahr and celcius) to be printed with a (\t) tab between them
     */

    /* 
     * Each (%) construction in the first argument of the printf ("")
     * is paired with the corresponding second argument, third argument, ...etc;
     * 
     * they must match up properly by number and type
     * or you'll get wrong output
     */

    /* 
     * NOTE : printf itself is not part of the C language
     * there is no output or input defined by C itself
     * printf is just a formatted function from the standard library of functions
     * for input, you can use scanf() function, like printf, except it's reads input
     * 
     * The behavior of printf and scanf is defined in the ANSI standard    
     */

    // We can make the output more prettier if we augment each %d in printf with a width
    printf("%3d %6d\n", fahr, celcius);

    // The numbers printed will be right-justifed in their fields
    // the first number field is three digits wide and the second is six digits wide

}