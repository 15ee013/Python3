#include<stdio.h>
void main()
{
int a[10],i,n;
printf("enter limimt");
scanf("%d",&n);
printf("enter element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf(" elements with index");
for(i=0;i<n;i++)
{
printf("%d\t%d\n",i,a[i]);
}
}
