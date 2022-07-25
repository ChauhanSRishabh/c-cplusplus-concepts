#include <stdio.h>

/* CONSTANTS
Value or variable that can't be changed
2 ways to define - 
(1) const keyword
(2) #define pre-processor
*/

#define pi 3.14

int main()
{
    int a = 8;
    const float b = 7.33; // b = 7.22 cannot be done since b is constant
    
    // pi = 7.33; // if we uncomment this line, then it will put 3.14 in place of pi on LHS and RHS has 7.33. Hence an error is shown

    /*
    ESCAPE SEQUENCE
    \n : next line
    \t : tab
    \b : backspace
    */

    printf("%f \n", pi); // here \n is an escape sequence
    
    /* FORMAT SPECIFIER
    float : %f
    character : %c
    integer : %d
    long : %l
    double : %lf
    long double : %Lf
    */

    printf("my backslash \\ %f", pi); // 1st backslash inside "" in a print statement gets skipped. So in order to print a \, another \ must precede it

    printf("\n wow what a scene \n");
    printf("value of b is %+10.4f \n",b); // leave 10 spaces and then print value of b upto 4 decimal place accuracy
    printf("value of b is %-10.4f \n",b); // print the value of b upto 4 decimal place and then leave 10 spaces
    

    return 0;
}
