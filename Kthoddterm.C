#include <stdio.h>
void main() 
{
int n,k,i,a[10],flag=0;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2==1)
{
flag++;
}
if(flag==k)
{
printf("%d is the odd number of %d",a[i],k);
break;
}
}
