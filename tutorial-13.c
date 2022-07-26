#include <stdio.h>

int main()
{

    int num, index = 0;
    printf("enter a number \n");
    scanf("%d", &num);

    // DO_WHILE LOOP
    // runs atleast once
    do
    {
        printf("%d\n", index + 1);
        index = index + 1;

    } while (index < num);

    return 0;
}
