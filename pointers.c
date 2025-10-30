#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int *ptr;
	ptr=&n;
	printf("%d\n",ptr);
	printf("%d",*ptr);
	return 0;
}