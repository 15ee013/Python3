#include<stdio.h>
void main()
{
int n,a,m,t,i,sum=0;
printf("enter the first number and \ndifference and \nnumber of terms");
scanf("%d%d%d",&n,&a,&m);
for(i=1;i<m;i++)
{
t=n+(m-1)*a;
sum=sum+t;
}
printf("%a",sum);
}
