#include<stdio.h>
main()
{
int a,b;
printf("input two numbers a & b to swap\n");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("a=%d\nb=%d\n",a,b);
}