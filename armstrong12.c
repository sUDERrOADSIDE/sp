#include <stdio.h>
int main()
{
    int a, o, r,t = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &a);

    o = a;

    while (o != 0)
    {
        r = o%10;
        t += r*r*r;
        o/= 10;
    }

    if(t == a)
        printf("%d is an Armstrong number.",a);
    else
        printf("%d is not an Armstrong number.",a);

    return 0;
}
