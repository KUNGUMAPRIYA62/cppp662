#include <stdio.h>
void main() 
{
	float n;
	int a;
	scanf("%f",&n);
	if(n<0)
	{
	    a=n-0.5;
	}
	else
	{
	    a=n+0.5;
	}
	printf("%d",a);
}
