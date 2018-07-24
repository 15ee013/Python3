#include<stdio.h>
void main()
{
int n,a,temp=0,c;
printf("enter the number");
scanf("%d",&n);
c=n;
while(n>0)
{
a=n%10;
temp=temp+(a*a*a);
n=n/10;
}
printf("%d",temp);
if(temp==c)
{
printf("armstrong number");
}
else
{
printf("not an armstrong");
}
}
