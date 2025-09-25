#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	int a;
	if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
	printf("given character is an alphabet");
	else
	printf("given character is not an alphabet");
	return 0;
}