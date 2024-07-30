#include <stdio.h>
#include <stdlib.h>
int a[10],min=INT_MAX,max=-1;
void divide(int l,int r)
{
	int m=(l+r)/2;
	if(l==r)
	{
		if(min>a[l]) min=a[l];
		if(max<a[l]) max=a[l];
		return;
	}
	divide(l,m);
	divide(m+1,r);
}
int main()
{
	int n;
	printf("Enter the Size of the Array:");
	scanf("%d",&n);
	printf("Enter the Array Elements:");
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	divide(0,n-1);
	printf("Minimum Element=%d\nMaximum Element=%d",min,max);
}