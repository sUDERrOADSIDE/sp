#include <stdio.h>
int main()
{
    int sp, i;
    unsigned long long factorial = 1;

    printf("Enter an integer: ");
    scanf("%d",&sp);
    if (sp < 0)
        printf("Error! Factorial of a negative number doesn't exist.");

    else
    {
        for(i=1; i<=sp; ++i)
        {
            factorial *= i;     
        }
        printf("Factorial of %d = %llu", sp, factorial);
    }

    return 0;
}
