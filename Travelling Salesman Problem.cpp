#include<stdio.h>
int graph[10][10],v[10],n,cost=0;
int tsp(int s);
int main()
{
	printf("Enter the Number of Vertices:");
	scanf("%d",&n);
	printf("Enter the Graph's Adjacency Matrix\n");
	for(int i=0;i<n;i++)
	{
		v[i]=0;
		for(int j=0;j<n;j++) 
		{
		scanf("%d",&graph[i][j]);
	}}
	int start=0;
	printf("The Shortest Path:");
	tsp(start);
	printf("Minumum Cost:%d",cost);
	return 0;
}
int tsp(int s)
{
	int min=999,av=999,i;
	v[s]=1;
	printf("%d-",s);
	for(i=0;i<n;i++)
	{
		if(graph[s][i]!=0 && v[i]!=1)
		{
			if(min>graph[s][i])
			{
				min=graph[s][i];
				av=i;
			}
		}
	}
	if(min!=999) cost+=min;
	if(av==999)
	{
		av=0;
		printf("%d",av);
		cost+=graph[s][av];
		return 1;
	}
	tsp(av);
}
