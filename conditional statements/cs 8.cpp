#include<stdio.h>
int main()
{
	int a;
	printf("enter the number");
	scanf("%d",&a);
	if((a%10)%3==0)
	printf("%d is divisible of 3",a);
	else
	printf("%d is not divisible of 3",a);
	return 0;
}