#include <stdio.h>
int factorial(int a)
{
	if(a==1) return 1;
	return factorial(a-1)*a;
}
int main()
{
	int a;
	printf("Enter the Number:");
	scanf("%d",&a);
	printf("The Factorial of the Number is %d",factorial(a));
}