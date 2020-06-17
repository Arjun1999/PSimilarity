#include<stdio.h>

int main()
{
    long long int a[5],min_index=0,max_index=0,i,j,smin=0,smax=0;
    for(i=0;i<5;i++)
    {
        scanf("%lld",&a[i]);
        if ( i==0 )
            continue;
        else
        {
            if (a[i] < a[min_index])
                min_index = i;
            if (a[i] > a[max_index])
                max_index = i;
        }
    }
    
    for ( i=0;i<5;i++ )
    {
        if (i!=min_index)
            smax += a[i];
        if (i!=max_index)
            smin += a[i];
    }
    printf("%lld %lld\n",smin,smax);
    return 0;
}    