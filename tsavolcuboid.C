#include<stdio.h>
void main()
{
int l,w,h;
int TSA,Volume;
scanf("%d%d%d",&l,&w,&h);
TSA=2*((l*w)+(l*h)+(h*w));
printf("TSA:%d",TSA);
Volume=l*w*h;
printf("\nVolume:%d",Volume);
}
