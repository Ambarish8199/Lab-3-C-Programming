#include<stdio.h>

int main ()
{
	int i=0,N,n;
	printf("The Decimal Number Is ");
	scanf("%d",&N);
    do
    {
       n = i;
       int a[n];
       a[n] = N%2;
       N = N/2;
       printf("%d\n",a[n]);
	   i++;
	}while(N!=0);
	int a[n];
	do
	{  
		printf("%d",a[i-1]);
		i--;
	}while(i>0);
	return 0;
}
	