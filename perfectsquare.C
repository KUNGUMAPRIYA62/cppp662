#include <stdio.h>
void main() 
{
    int k,m,a,i;
    scanf("%d %d",&k,&m);
    a=k*m;
    for(i=0;i<=a;i++)
    {
        if(a==(i*i))
        {
            printf("yes..perfect square");
        }
    }
}
