#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the two numbers");
scanf("%d%d",&a,&b);
for(c=a;a<=b;a++)
{
if(a%2!=0)
{
printf("%d",a);
printf("\n");
}
}

return 0;
}
