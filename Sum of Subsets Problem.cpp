#include <stdio.h>
#include <stdlib.h>
void subsets(int *arr,int n,int sum,int *subset,int ss)
{
	if(sum==0)
	{
		for(int i=0;i<ss;i++) printf("%d ",subset[i]);
		printf("\n");
		return;
	}
	if(n==0) return;
	subsets(arr,n-1,sum,subset,ss);
	subset[ss]=arr[n-1];
	subsets(arr,n-1,sum-arr[n-1],subset,ss+1);
}
int main()
{
	int n,a[10],sum;
	printf("Enter the Size of the Array:");
	scanf("%d",&n);
	printf("Enter the Array Elements:");
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	printf("Enter the Sum:");
	scanf("%d",&sum);
	subsets(a,n,sum,(int*)(malloc(n*sizeof(int))),0);
}
