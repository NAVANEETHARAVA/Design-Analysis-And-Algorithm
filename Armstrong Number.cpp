#include <stdio.h>
#include<math.h>
int len(int a)
{
	int s=0;
	while(a!=0)
	{
		s++;
		a/=10;
	}
	return s;
}
int main()
{
	int a,b,s,l;
	printf("Enter the Number:");
	scanf("%d",&a);
	l=len(a);
	b=a;
	while(a!=0)
	{
		s+=pow(a%10,l);
		a/=10;
	}
	if(s==b) printf("The Number is Armstrong!!");
	else printf("The Number is Not an Armstrong Number!!");
}
