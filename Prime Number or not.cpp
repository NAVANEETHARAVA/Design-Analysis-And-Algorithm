#include <stdio.h>
int isprime(int a)
{
	for(int i=2;i<a;i++)
	{
		if(a%i==0) return 0;
	}
	return 1;
}
int main()
{
	int a;
	printf("Enter the Number:");
	scanf("%d",&a);
	if(isprime(a)) printf("The Number is Prime!!");
	else printf("The Number is Not Prime!!");
}
