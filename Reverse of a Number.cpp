#include <stdio.h>
int main()
{
	int a,rev=0;
	printf("Enter the Number:");
	scanf("%d",&a);
	while(a!=0)
	{
		rev=rev*10+(a%10);
		a/=10;
	}
	printf("The reverse of the Number is %d",rev);
}
