#include<stdio.h>
int main()
{
	int a;
	printf("Enter the Number:");
	scanf("%d",&a);
	printf("The Factors of %d is:",a);
	for(int i=1;i<=a;i++)
	{
		if(a%i==0) printf("%d ",i);
	}
}