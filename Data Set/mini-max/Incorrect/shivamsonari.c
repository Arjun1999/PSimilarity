#include<stdio.h>
#define maxx 10
void minmaxsum(int a[])
{
    int min,max,i,smax=a[0],smin=a[0];
    min=a[0];
    max=a[0];
    for(i=1;i<5;i++)
    {
        smax=smax+a[i];
        if(min>a[i])
        {
            min=a[i];
            }
            else
            continue;
    }
    smax=smax-min;
     for(i=1;i<5;i++)
    {
        smin=smin+a[i];
        if(max<a[i])
        {
            max=a[i];
            }
            else
            continue;
    }
    smin=smin-max;
    printf("%d  %d",smin,smax);
}
int main()
{
    int a[maxx];
    
    minmaxsum(a);
    return 0;
}
    

    
