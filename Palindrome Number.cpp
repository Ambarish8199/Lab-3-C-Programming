#include<stdio.h>
#include<math.h>

int main ()
{
	int i,n,N,sum,N1,N2;
	sum = 0 ;
	scanf("%d",&n);
	printf("The Number Is ");
	scanf("%d",&N);
	for (i=1;i<=n;i++)
	{
		N1 = N%10;
		N = N/10;
		N2 = N1*pow(10,n-i);
		sum = sum + N2;
	}
	printf("Reverse Number Is %d\n",sum);
	
	printf("The Number Is ");
	scanf("%d",&N);
	if (N!=sum)
	{
		printf("Not A Palindrome Number");
	}
	else
	{
		printf("Palindrome Number");
	}
	return 0;
}