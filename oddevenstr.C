#include <stdio.h>
void main()
{
	char str[50];
	int i,n;
	printf("Enter the string:");
	scanf("%s",&str);
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
		printf("%c",str[i]);
		}
   }
    printf(" ");
	for(i=0;i<n;i++)
	{
		if(i%2==1)
		{
			printf("%c",/nstr[i]);
		}
	}
}
