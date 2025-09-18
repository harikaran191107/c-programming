#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d",&a,&b);
	c=a%10;
	d=b%10;
	if(c==d)
	printf("true");
	else
	printf("false");
	return 0;
}