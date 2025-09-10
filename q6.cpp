#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	printf("before swapping,\n");
	a=b;
	scanf("%d%d",&b,&c);
	b=c;
	printf("after swaping,\n");
	printf("%d%d",a,b);
	return 0;
}