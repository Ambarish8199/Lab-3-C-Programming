#include<stdio.h>
#include<math.h>

int main ()
{
	int t,i;
	int n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	i=0;
	t=0;
	while(i<n)
	{
		t = t + (arr[n-i-1])*(pow(2,i));
		i++;
	}
	printf("%d",t);
	return 0;
}