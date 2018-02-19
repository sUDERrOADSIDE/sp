#include<stdio.h>
int main()
{
int a[50],i,n,min;
printf("enter the range\n");
scanf("%d",&n);
printf("enter the array values\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<n;i++)
{
if(a[i]<min)
{
min=a[i];
}
}
printf("%d\n",min);
return 0;
}
