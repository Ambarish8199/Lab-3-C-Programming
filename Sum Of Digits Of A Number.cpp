#include<stdio.h>
#include<math.h>

int main ()
{
	int i,n,N,sum,N1;
	sum = 0 ;
	scanf("%d",&n);
	printf("The Number Is ");
	scanf("%d",&N);
	for (i=0;i<n;i++)
	{
		N1 = N%10;
		N = N/10;
		sum = sum + N1;
	}
	printf("Sum Of Digits Of A Number Is %d",sum);
	return 0;
}