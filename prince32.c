#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int sum=1;
	for (int a=1; a<=n; a++){
		sum=sum*a;
	}
	printf("%d",sum);
}