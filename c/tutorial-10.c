#include <stdio.h>

int main()
{
    int age;

    printf("enter your age \n");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("eligible \n");
    }
    else if (age > 10)
    {
        printf("you are b/w 10 to 18");
    }
    else
    {
        printf("not eligible \n");
    }

    return 0;
}
