#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the number");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b&a<c)
	printf("%d is the smallest num",a);
	else if(b<c)
	printf("%d is the smallest num",b);
	else
	printf("%d is the smallest num ",c);
	return 0;
}