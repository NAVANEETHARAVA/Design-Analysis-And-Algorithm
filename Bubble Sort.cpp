#include <stdio.h>
int main()
{
	int a[10],n;
	printf("Enter the Array Size:");
	scanf("%d",&n);
	printf("Enter the Array Elements:");
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++ )
		{
			if(a[j]>a[j+1])
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("Sorted Array: ");
	for(int i=0;i<n;i++) printf("%d ",a[i]);
}
