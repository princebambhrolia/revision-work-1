#include<stdio.h>
main()
{
int a,b,calc;
printf("enter the number");
scanf("%d%d",&a,&b);
calc=(a*a*a)-3*(a*a*b)+3*(a*b*b)-(b*b*b);
printf("%d",calc);
}