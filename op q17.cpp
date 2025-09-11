#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if((n&(n-1))==0)
	{
		printf("it is a multiple of two");
	}
	else 
	{
		printf("it is not a multiple of two");
	}
	return 0;
}