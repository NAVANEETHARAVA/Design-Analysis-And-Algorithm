#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter the Two Numbers:");
	scanf("%d%d",&a,&b);
	int min=a<b?a:b;
	for(int i=min;i>0;i--)
	{
		if(a%i==0 && b%i==0)
		{
			printf("The Gcd is %d",i);
			break;
		}
	}
}
