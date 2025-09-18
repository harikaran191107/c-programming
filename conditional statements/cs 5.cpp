#include<stdio.h>
int main()
{
	int a;
	printf("enter the number");
	scanf("%d",&a);
	if(a>99&a<1000)
	printf("%d is 3 digit number",a);
	else
	printf("%d is not a 3 digit number",a);
	return 0;
}