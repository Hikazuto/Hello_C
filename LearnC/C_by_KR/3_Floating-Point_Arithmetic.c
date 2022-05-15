#include <stdio.h>

int main()
{
    // To make the temperature conversion more accurate 
    // (0 F is actually about -17.8 C,not -17 C)
    // use floating-point numbers [float] (have fractional part) instead of integer

    // The second version
    float fahr,celcius;     /* Same as before except fahr and celcius declared to be float type */
    int lower,upper, step;

    lower = 0;      /* Lower limit of the tempetarure table */
    upper = 300;    /* Upper limit */
    step = 5;       /* Step size */

    fahr = lower;
    while (fahr <= upper)
    {
        celcius = (5.0/9.0) * (fahr - 32.0);
        printf("%4.0f |%6.2f\n", fahr, celcius);
        fahr = fahr + step;
    }
    
    /* because integer division truncates to zero (5/9)
     * A decimal point in the constant indicates floating-point
     * so (5.0 / 9.0) is not truncated because it is two floating-point values
     */

    /* 
     * If an arithmetic operator has integer operands, an integer operation is performed
     * If an arithmetic operator has one floating-point and integer oprands
     * The integer will be converted to floating-point before the opration is done
     * 
     * in (fahr - 32), the 32 would be automatically converted to floating-point
     * in (5 / 9.0), the 5 would also be automatically converted to floating-point
     */

    // Notice, this statement works the same
    fahr = lower; 
    // And the test
    while (fahr >= upper);

    // the value of lower and upper will be converted to float
    // before assigned or test to fahr, because "fahr" has float type

    /* NOTE: 
     * It is recommended to write floating-point constants
     * with explicit decimal points even when they have integral values
     * 
     * to emphasize their floaing-point nature for human readers  
     */

                        /* printf CONVERSION SPECIFICATION */
    // Width and Precision may be ommited from a specification
    // *See also: Data Types

    /*
     * PREFIXES (%_type)
     * %h_  - Print as short (for i and d)
     * %l_  - Print as long
     * 
     * POSTFIX (%type_)
     * %_u  - Print unsigned
     * 
     * FORMAT SPECIFIER
     * %hi or %hd - Print as Short
     * %i   - Print as Integer
     * %li  - Print as Long
     * %lu  - Print as Unsigned Long
     * %d   - Print as Decimal Integer
     * 
     * %f   - Print as Floating-Point
     * %lf  - Print as Double Precision Floating-Point
     * %LF  - Print as Long Double
     * 
     * %o   - For Octal
     * %x   - For Hexadecimal
     * 
     * %c   - For Characters
     * %s   - For String
     * %%   - For % itself 
     * And much more..
     */

    /* WIDTH AND PRECISION 
     * %f     merely says to print number as floating-point
     * %6d    says that the output (decimal integer) is to be at least 6 characters wide
     * %.2f   specifies 2 characters after decimal point, but the witdh isn't constrained
     * %6.2f  print as floating-point, at least 6 wide and 2 after decimal point
     */


// Exercise 1-3
    lower = 92;      /* Lower limit of the tempetarure table */
    upper = 300;    /* Upper limit */
    step = 5;       /* Step size */
    fahr = lower;

    // I don't know, this is the heading I can think of
    printf("Fahr | Celcius\n");
    printf("______________________\n");
    while (fahr <= upper)
    {
        celcius = (5.0/9.0) * (fahr - 32.0);
        printf("%4.0f |%6.2f\n", fahr, celcius);
        fahr = fahr + step;
    }

// Exercise 1-4
    // Celcius to Fahrenheit F = (C * (9/5)) + 32
    lower = 0;      /* Lower limit of the tempetarure table */
    upper = 300;    /* Upper limit */
    step = 8;       /* Step size */

    celcius = lower;
    printf("Celcius | Fahrenheit\n");
    printf("______________________\n");
    while (celcius <= upper)
    {
        fahr = (celcius * (9.0 / 5.0)) + 32;
        printf("%4.0f |%6.2f\n", celcius, fahr);
        celcius = celcius + step;
    }


                        /* THE FOR LOOP STATEMENT */

    // This produces the same answers, but it certainly looks diffenrent
    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
    {
        printf("%.0f |%6.2f\n", fahr, (5.0/9.0) * (fahr - 32));
    }

    /* 
     * One major change is the elimination of most of the variables
     * only fahr remains and we have made it an int
     * lower, upper limits and step size appear as constants
     * and celcius conversion now appears as third argument of printf
     * 
     * third argument of printf must be floating-point type
     * to match the %6.2f, any floating point expression can occur there
     */

    // Version 2
    for (int fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d |%6.2f\n", fahr, (5.0/9.0) * (fahr - 32));
    
    // The for statement is a loop, a generalization of the while
    // within the parentheses, there are 3 parts separated by semicolons

    // The for loop operates as follows
    /* 
     * The first part, the initialization 
     * fahr = 0
     * 
     * or you can declare a whole new "local" varible
     * int fahr = 0
     * 
     * "local" means the variable only exists in a certain group
     * and wouldn't be confused with other variables outside the group
     * (In this case is the for loop group)
     */

    /*
     * The second part is the test condition that controls the loop
     * fahr <= 300
     * 
     * if its true the body of the loop is executed
     */

    /*
     * After done the third part of the loop is executed
     * in here we used increment step 
     * fahr = fahr + 20
     *  
     * then the condition is re-evaluated, and re-executed
     * until the test (second part) become false
     */

    // the head of the loops can be left as blank, as follows
    // Keep in mind that the test condition cannot be blank or the loop won't operates
    for(;1;)  // in here as we all know in boolean 1 means "true" and 0 means "false" 
    printf("body of the loop\n"); 
    printf("not the loop's body anymore\n");

    /*
     * the loops (for and while) can operate without curly braces
     * the statement exactly after the head will be trated as the body of the loop
     * 
     * the body can be placed anywhere after the head
     * but it will be restricted with only a single statement
     * 
     * the body of the loop can be a single statement
     * or a group of statements enclosed in braces
     */

    /* NOTE :I personally think
     * it is best to keep the braces in or as the body of the loop
     * Regardless of how much the statements are (single or multiple)
     * as it clarify the program grouping and easier to understand
     */

    /* 
     * The choice between while and for is arbitrary based on which seems clearer
     * The for is usually appropriate for loops in ehich the initialization
     * and increment are single statements and logically related
     * since in more compact than while
     * 
     * and it keeps loop control statements together in one place
     */

    // Exercise 1-5 (reverse the temperature conversion program)
    printf("fahr | Celcius\n");
    for (float fahr = 300; fahr >= 0; fahr = fahr - 5)
    {
        float celcius = (5.0/9.0) * (fahr - 32);
        printf("%4.0f | %6.2f\n", fahr, celcius);
    }
    
}