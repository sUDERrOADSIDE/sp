#include<stdio.h>
int main()
{
int a,d,i;
printf("enter the number\n");
scanf("%d",&a);
for(i=1;i<=5;i++)
{
d=a*i;
printf("%d\n",d);
printf("\t");
}
return 0;
}
