#include<stdio.h>

int main ()
{
	int i,n,x=0,y=1,next_number;
	scanf("%d",&n);
	printf("%d\n%d\n",x,y);
    next_number = x + y;
    printf("%d\n",next_number);
	for (i=0;i<n;i++)
	{ 
	   int t;
	   t=next_number;
	   next_number = y;
	   y=t;
	   
	   next_number = next_number + y ;
		printf("%d\n",next_number);
	}
	return 0;
}