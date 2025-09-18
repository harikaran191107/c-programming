#include<stdio.h>
int main()
{
	int a;
	printf("enter the number");
	scanf("%d",&a);
	if(a&1)
	printf("%d is a even num",a);
	else
	printf("%d is a odd num",a);
	return 0;
}