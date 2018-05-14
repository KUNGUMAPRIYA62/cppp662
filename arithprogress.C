#include <stdio.h>
void main() 
{
int n,a,d,i,sum=0;
printf("first term\n");
scanf("%d",&a);
printf("difference\n");
scanf("%d",&d);
printf("no of terms\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
sum=sum+(a+i*d);
}
printf("%d",sum);
}
