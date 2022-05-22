// 5 (Character Input & Output)

#include <stdio.h>
int main()
{
  /*
   * Text input and output, regardless where it originates
   * or where it goes to, is dealt with as streams of characters
   * 
   * A "text stream" is a sequence of characters divided into lines
   * each line consists of zero or more characters followed by a newlne character
   */

  /* 
   * The standard library provides several functions
   * for Reading and Writing one character at a time
   * 
   * getchar() and putchar() are the simplest
   * 
   * getchar reads the next input character 
   * from a TEXT STREAM and returns its value
   * 
   * putchar prints a character each time its called
  */

                                  /* FILE COPYING */
  /* copy input to output: 1st version */
  int c;

  c = getchar();
  while (c != EOF)    /* The relational operator != means "not equal to" */
  {    
    putchar(c);
    c = getchar();
  }

  // reads an input character, return its integer value, and assign it to "c" variable
  c = getchar();

  // prints the contents of the integer varible c as a character
  putchar(c);

  /*
   * What appears to be a character on the keyboard or screen of course
   * stored internally just as a bit pattern
   * 
   * ex: in ASCII [1 byte] or [8 bits]
   * Character | (Integer) Value | Binary Pattern (1 byte / 8 bits) 
   * ______________________________________________________________
   *    'a'    |       97        |            01100001
   *    'b'    |       98        |            01100010
   *    'A'    |       65        |            01000001
   *    'B'    |       66        |            01000010
   *    '0'    |       48        |            00110000
   *    '1'    |       49        |            00110001
   *    '\n'   |       10        |            00001010
   * 
   * The type (char) is specifically meant for storing such data
   * the size of char is 8 bits (1 byte) [total value: 256], mainly for storing ASCII Characters
   * 
   * 
   * but any any integer type can be used (char, int, uint, short, long, etc.)
     > see also             : Data Types [Binary]
     > Browse the Internet  : Binary Value, ASCII (Binary)
                              How Computer store data (Binary pattern in each Data Types)
  */



                              /* EOF (End Of File) */
  c != EOF;

  /* > Browse the Internet: EOF (End Of File)
   * 
   * In this program, we use int for a subtle but important reason
   * getchar() returns a distinctive value when there is no more input
   * 
   * This value called EOF (End Of File) 
   * Defined in <stdio.h> library as negative integer value, typically (-1)
   * to distinguish it from "char" values that are in the range 0 to 255.
   *  
   * According to POSIX (Portable Operating System Interface)
      > Browse: POSIX
   
   * We must declare "c" to be a type big enough to hold the value of EOF (-1)
   * Therefore we use int (value: -32768 ~ +32767) instead of char (value: 0 ~ 255)
      > See Also: Data Types
  */


  // In here, when there's no more input getchar will return EOF, hence exit the loop 
  while(c != EOF);

  /*
   * NOTE: The specific EOF value doesn't matter and can be any value
   * as long as it is not the same (distinguished) as any "char" value 
   * 
   * By using symbolic constant (negative value) in <stdio.h> library
   * we can be assured that nothing in the program depends on the specific numeric value
   * 
   
           ## IMPORTANT NOTE ##
  We can explicitly use or input "EOF" in Terminal 
   > Type (Ctrl + D) [^D] In LINUX / UNIX-like Systems Terminal 
   > Type (Ctrl + Z) [^Z] In Windows System Terminal

    But in other contexts (reading from a file), Character [^D] or [^Z] just another data character 
    Either way, the [^D] character (meaning end of input) never makes it to application code

    @ From - StackOverflow

  */


                      /* EXPRESSIONS PRECEDENCE VALUE */

  c = getchar();   /* Is an expression (assignment) and has a value
                     to which will be the first one to be executed */

  /*
   * NOTE: Same as expression value in Math
   * - multiplication (*) and division (/) has a bigger expression value than
   * - addition (+) and subtraction (-)
   *  
   * therefore (*) or (/) will be calculated firstly before (+) and (-)
   * Simply put, if we list the expressions value to a table
    
     Operator Expressions | Value
    ---------------------------------
            ...           |   .
     Exponentiation (^)   |   3
     (*)    and     (/)   |   2
     (+)    and     (-)   |   1

   # The highest value in order will be calculated first
  */

  /*                       PARENTHESES ()  
   *
   * However.., there's one expression that has a special value
   * A value that will overrides all other expression's values
   
   # It is () "Parentheses"  -  that holds the highest special value
   
   * As we all know, all expressions and operators inside a parentheses 
   * will be calculated first, no matter what Precedence Value they have
   * 
   $ ex: 4 * (2 + 3) 
      (2 + 3) - will be calculated first, no matter where and what they are

      - thus, the () will overrides the [+] value and ignores [*]
  */


  // We still can write the program more concisely

  // instead of
  c = getchar();
  while (c != EOF){
    putchar(c);
    c = getchar();
  }
    
  // If the copy program assignment is put inside the test part of the loop
  while ( (c = getchar()) != EOF )
    putchar(c);

  /* 
   * This version centralizes the input 
   * (now only one reference to getchar and shrinks the program)
   * 
   * The resulting program is more compact
   * once the idiom is mastered, easier to read 
  */
    
  /* NOTE: The parentheses around the assignment
   * within the condition is necessary
   *
   * the precedence value of (!=) is higher than (=)
   * which means in the absence of parentheses (!=) would be done before (=)
  */

  /*
                    # IMPORTANT NOTE #
   # Same as math, all expressions in C have their own value
   # This is called "C Operator Precedence"

    > See also  : Expressions
    > Browse    : (C) "Operator Precedence", "Expressions"
    > Additional Reference : https://en.cppreference.com/w/c/language/operator_precedence

  */


  /* BEWARE */
  // Keep in mind "every expression has their own precedence value"
  // when writing program, because
    
  c = getchar() != EOF;
  // This statement is equivalent to
  c = (getchar() != EOF);

  /* This has undesired effect of setting c to 0 or 1
    Depending on whether or not the call of getchar() encountered end of file */


  // Exercise 1-6 (Verify the particular relational expression is 0 or 1)
  printf("value: %d\n", getchar() != EOF); 

    /* The output depends on the input whether end of file or not
     * However, we can explicitly input EOF in terminal by

       > Typing (Ctrl + D) [^D] - On LINUX/UNIX-like systems
       > Typing (Ctrl + Z) [^Z] - On Windows System

     * note: The value  0 is (false)  |  1 is (true)
    */

  // Exercise 1-7 (Print the value of EOF)
    printf("Value of EOF: %d\n", EOF);  /* Typically, the value of EOF is -1 */

  // Despite of that, we can see the value of EOF directly though..
  // Defined in <stdio.h> standard library
  // Just search inside the library file in case you're wondering..
}