#include<stdio.h>
int n=100;
void func1()
{
	printf("func1:%d\n",n);
}
void func2()
{
	printf("func2:%d\n",n);
}
int main()
{
	printf("main:%d\n",n);
	func1();
	func2();
	return 0;
}
