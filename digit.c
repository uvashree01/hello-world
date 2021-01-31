#include<stdio.h>
void main()
{
int n,a,m,count=0;
scanf("%d %d",&n,&a);
while(n!=0)
{
m=n%10;
if(m!=a)
{
count++;
}
n=n/10;
}
printf("%d",count);
}
