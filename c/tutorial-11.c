#include <stdio.h>

/*
RULES FOR SWITCH CASE
(1) switch expression must be an int or char
(2) case value must be an int or char
(3) case must come inside switch
(4) break is not a must
*/

int main()
{
    int age, marks;
    printf("Enter your age \n");
    scanf("%d", &age);
    printf("Enter your marks \n");
    scanf("%d", &marks);

    // SWITCH CASE
    // convenient over If in some cases
    // break helps in coming out of the switch case block

    //print marks only when age is 3. In all other cases display just the age
    switch (age)
    {
    case 3:
        printf("age is 3\n");

        // NESTED SWITCH CASE
        switch (marks)
        {
        case 45:
            printf("your marks are 45\n");
            break; //

        default: // runs only when nothing matches
            printf("your marks are not 45\n");
        }
        break;
        // If no break statement, it will run all the cases as well as default
    case 13:
        printf("age is 13\n");
        break;

    case 23:
        printf("age is 23\n");
        break;

    default:
        printf("age is not 3, 13 or 23\n");
        break;
    }
    return 0;
}
