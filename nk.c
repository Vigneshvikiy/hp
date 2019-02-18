#include<stdio.h>
int main()
{
int a,b,i,j,sum=0;
printf("enter the values:");
scanf("%d\t%d",&a,&b);
for(i=1;i<=a;i++)
{
printf("%d\n",a);
}
for(j=1;j<=b;j++)
{
sum=sum+j;
}
printf("sum is %d",sum);
return 0;
}
