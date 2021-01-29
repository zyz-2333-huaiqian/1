#include<stdio.h>
#pragma warning(disable:4996)
main()
{
	int m,n,p,a[100][100],b[100][100],c[100][100],i,j,k;
	scanf("%d%d%d",&m,&n,&p);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	for(i=0;i<n;i++)
		for(j=0;j<p;j++)
		{
			scanf("%d",&b[i][j]);
		}
	i=0;j=0;
	for(i=0;i<m;i++)
		for(j=0;j<p;j++)
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
		}
	for(j=0;j<p;j++)
		{
			for(i=0;i<m;i++)
			printf("%d  ",c[i][j]);
			printf("\n");
	    }

}
