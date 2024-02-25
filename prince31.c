#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int sum;
	for (int x =1; x<=n; x++){
		sum += x;
	}
	printf("%d",sum);
}