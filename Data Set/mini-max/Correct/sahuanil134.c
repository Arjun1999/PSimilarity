#include<stdio.h>
int main()
    {
    long long int a[5],i,max=1000000000,min=0,p1=0,p2=0;
    for(i=0;i<5;i++)
        {
        scanf("%lld",&a[i]);

    }
    for(i=0;i<5;i++)
        {
            if(max>a[i])
            {

                max=a[i];
            }
            if(min<a[i])
            {

                min=a[i];
            }



    }
    for(i=0;i<5;i++)
    {

        p1=p1+a[i];
        p2=p2+a[i];
    }
    p1=p1-max;
    p2=p2-min;

    printf("%lld %lld",p2,p1);
    return 0;
}
