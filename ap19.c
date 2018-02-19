#include<stdio.h>
int main()
{
int N,A,D,i,sp=0;
scanf("%d %d %d",&N,&A,&D);
for(i=N;i>1;i--)
{
sp=sp+(A+(N-1)*D);
}
printf("%d",sp);
return 0;
}
