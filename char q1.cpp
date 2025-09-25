#include<stdio.h>
int main()
{
	char p;
	scanf("%c",&p);
	if(p=='a'||p=='e'||p=='i'||p=='o'||p=='u'||p=='A'||p=='E'||p=='I'||p=='O'||p=='U')
	printf("the given word is vowel");
	else
	printf("the given word is consonant");
	return 0;
}
