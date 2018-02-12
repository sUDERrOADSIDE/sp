#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Prime numbers between %d and %d are: ", a, b);

    while (a < b)
    {
        d = 0;

        for(c = 2; c <= a/2; ++c)
        {
            if(a % c == 0)
            {
                d = 1;
                break;
            }
        }

        if (d == 0)
            printf("%d ", a);

        ++a;
    }

    return 0;
}

