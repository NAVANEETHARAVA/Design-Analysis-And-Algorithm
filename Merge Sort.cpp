#include <stdio.h>
int a[10];
int merge(int l,int m,int r)
{
	int r1=m-l+1,r2=r-m;
	int left[r1],right[r2];
	for(int i=0;i<r1;i++) left[i]=a[l+i];
	for(int i=0;i<r2;i++) right[i]=a[m+i+1];
	int i=0,j=0,k=l;
	while(i<r1 && i<r2)
	{
		if(left[i]>right[j])
		{
		     a[k++]=right[j++];
		}
		if(left[i]<right[j]) a[k++]=left[i++];
	}
	while(i<r1) a[k++]=left[i++];
	while(i<r2) a[k++]=right[j++];
}
int mergesort(int l,int r)
{
	if(l<r)
	{
		int m=(l+r)/2;
		mergesort(l,m);
		mergesort(m+1,r);
		merge(l,m,r);
	}
}
int main()
{
	int n;
	printf("Enter the Size of the Array:");
	scanf("%d",&n);
	printf("Enter the Array Elements:");
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	mergesort(0,n-1);
	printf("Sorted Array: ");
	for(int i=0;i<n;i++) printf("%d ",a[i]);
}
