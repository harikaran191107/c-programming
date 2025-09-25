#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a==b && a==c)
	printf("the given triangle is a equilateral tringle");
	else if(a==b || b==c ||c==a)
	printf("the given triangle is a isosceles tringle");
	else
	printf("the given triangle is a scalene tringle");
	return 0;
}