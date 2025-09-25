#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	int a;
	if(ch>='A' && ch<='Z')
	printf("given character is in upper case");
	else if(ch>='a' && ch<='z')
	printf("given character is in lower case");
	else if(ch>='0' && ch<='9')
	printf("given character is in digit");
	else
	printf("given character is in special symbol");
	return 0;
}