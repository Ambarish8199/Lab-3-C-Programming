#include<stdio.h>

int main ()
{
	int i,n,f;
	f=1;
	printf("Number Is ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		f=f*i;
	}
    printf("%d",f);
    return 0;
}