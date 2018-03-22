#include <stdio.h>
void main() 
{
	int n,arr[30],i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(i!=arr[i])
		{
			printf("\n%d",i);
			break;
		}
	}
}
