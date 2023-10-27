#include<stdio.h>

int main ()
{
	int n,sum,i;
	printf("Number Is ");
	scanf("%d",&n);
	sum =0;
	for (i=1;i<=n;i++)
	{
	sum = sum + i;
	}
	printf("%d \n",sum);
	return 0;
}