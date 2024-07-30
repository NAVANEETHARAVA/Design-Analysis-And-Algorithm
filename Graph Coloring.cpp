#include <stdio.h>
int graph[10][10],n,m,c[10];
int check(int v,int color)
{
	for(int i=0;i<n;i++)
	{
		if(graph[v][i]==1 && color==c[i]) return 0;
	}
	return 1;
}
int colorg(int p)
{
	if(p==n) return 1;
	for(int i=1;i<=m;i++)
	{
		if(check(p,i))
		{
			c[p]=i;
			if(colorg(p+1)) return 1;
			c[p]=0;
		}
	}
	return 0;
}
int main()
{
	printf("Enter the Number of Vertex:");
	scanf("%d",&n);
	printf("Enter the Graph's Adjacency Matrix\n");
	for(int i=0;i<n;i++)
	{
		c[i]=0;
		for(int j=0;j<n;j++) scanf("%d",&graph[i][j]);
	}
	printf("Enter the Number of Colors:");
	scanf("%d",&m);
	colorg(0);
	for(int i=0;i<n;i++) printf("%d ",c[i]);
}

