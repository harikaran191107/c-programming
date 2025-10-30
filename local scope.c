#include<stdio.h>
void myfun()
{
	int n=100; 
	printf("%d\n");
}
int main()
{
	myfun();
	printf("%d",myfun);
	return 0;
}