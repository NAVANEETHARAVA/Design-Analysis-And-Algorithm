#include <stdio.h>
int main()
{
	int a[20],n,max=-1;
	printf("Enter the Size of the Array:");
	scanf("%d",&n);
	printf("Enter the Array Elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(max<a[i]) max=a[i];
	}
	printf("The Largest Number is %d",max);
}
