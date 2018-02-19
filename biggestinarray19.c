#include<stdio.h>
int main()
{
int a[50],i,n,max;
printf("enter the range\n");
scanf("%d",&n);
printf("enter the array values\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("%d\n",max);
return 0;
}




