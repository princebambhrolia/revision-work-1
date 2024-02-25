#include<stdio.h>
main()
{
int a,b,c;
printf("enter the number");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("%d%d",a,b);
}