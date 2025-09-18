#include<stdio.h>
int main()
{
	int a;
	printf("enter the number");
	scanf("%d",&a);
	if(a%2==0 && a%5==0 && a%8!=8)
	printf("%d is divisible by 2 and 5",a);
	else
	printf("%d is not divisible by 2 and 5",a);
	return 0;
}