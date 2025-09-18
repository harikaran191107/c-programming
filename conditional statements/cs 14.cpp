#include<stdio.h>
int main()
{
	int a;
	printf("enter the number");
	scanf("%d",&a);
	if(a%3==0 && a%5==0)
	printf("%d is a divisible of 3 and 5",a);
	else
	printf("%d is not a divisible of 3 and 5",a);
	return 0;
}