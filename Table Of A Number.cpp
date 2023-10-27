#include<stdio.h>

int main ()
{
	int m,n,i;
	printf("Number Is ");
	scanf("%d",&n);
	for (i=1;i<=10;i++)
	{
		m=n*i;
		printf("%d \n",m);
	}
	return 0;
}