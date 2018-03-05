#include <stdio.h>
void main() 
{
char a[10];
int x,i;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
x=a[i];
if(x%2!=0)
{
printf("\t%c",a[i]);	
}
}
}
