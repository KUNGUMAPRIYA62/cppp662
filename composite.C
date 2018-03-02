#include<stdio.h>
void main()
{
int n,i,count=0;
scanf("%d",&n);
for(i=2;i<=(n/2);i++0
{
if(i%2==0)
{
count++;
}
}
if(count==0)
{
printf("not composite");
}
else
{
printf("composite");
}
}
