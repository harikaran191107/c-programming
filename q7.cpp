#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("before swapping,\n");
	a=b;
	scanf("%d%d",&b,&a);
	b=a;
	printf("after swaping,\n");
	printf("%d%d",a,b);
	return 0;
}