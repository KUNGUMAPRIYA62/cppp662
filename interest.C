#include <stdio.h>
void main()
{
	int p,t,Interest;
	float r;
	scanf("%d%d%f",&p,&t,&r);
	Interest=p*(r/100)*t;
	printf("%d",Interest);
}


