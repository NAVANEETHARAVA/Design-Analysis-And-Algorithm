#include <stdio.h>
int isperfect(int a)
{
	int s=0;
	for(int i=1;i<a;i++)
	{
		if(a%i==0) s+=i;
	}
	if(s==a) return 1;
	return 0;
}
int main()
{
	int a;
	printf("Enter the Number:");
	scanf("%d",&a);
	if(isperfect(a)) printf("The Number is Perfect!!");
	else printf("The Number is Not Perfect!!");
}