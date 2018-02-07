#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the number");
scanf("%d",&a);
printf("Enter the power value");
scanf("%d",&b);
c=pow(a,b);
printf("The value is %d",c);
return 0;
}
