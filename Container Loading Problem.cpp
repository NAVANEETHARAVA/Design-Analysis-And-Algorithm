#include <stdio.h>
int max(int a,int b)
{
	return a>b?a:b;
}
int knapsack(int *wt,int *v,int w,int n)
{
	if(n==0 || w==0) return 0;
	if(wt[n-1]>w) return knapsack(wt,v,w,n-1);
	return max(v[n-1]+knapsack(wt,v,w-wt[n-1],n-1),knapsack(wt,v,w,n-1));
}
int main()
{
	int values[]={3,4,5,6};
	int weight[]={2,3,4,5};
	printf("Maximum Capacity:%d",knapsack(weight,values,8,4));
}
