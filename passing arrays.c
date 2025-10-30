#include<stdio.h>
void printfhari(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printfhari(arr,n);
	return 0;
}