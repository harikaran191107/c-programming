#include<stdio.h>
int main()
{
	int a;
	printf("enter the number");
	scanf("%d",&a);
	if(a%3==0 || a%7==0)
	printf("%d is a divisible by either 3 or 7",a);
	else
	printf("%d is not a divisible either by 3 or 7",a);
	return 0;
}