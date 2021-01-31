#include<stdio.h>
void main()
{
int n,a,m,count=0;
printf("\n\tThe given number : ");
scanf("%d",&n);
printf("\n\tThe number to be excluded : ");
scanf("%d",&a);
while(n!=0)
{
m=n%10;
if(m!=a)
{
count++;
}
n=n/10;
}
printf("\n\tThe count of remaining number : %d",count);
}
