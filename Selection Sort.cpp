#include <stdio.h>
int main()
{
	int a[10],n;
	printf("Enter the Size of the Array:");
	scanf("%d",&n);
	printf("Enter the Elements:");
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	{
		int min=a[i],in=i;
		for(int j=i+1;j<n;j++)
		{
			if(min>a[j])
			{
				min=a[j];
				in=j;
			}
		}
		int t=a[i];
		a[i]=min;
		a[in]=t;
	}
	printf("Sorted Array: ");
	for(int i=0;i<n;i++) printf("%d ",a[i]);
}
