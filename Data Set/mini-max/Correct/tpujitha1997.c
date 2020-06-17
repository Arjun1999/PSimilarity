#include<stdio.h>
#include<math.h>
int main()
{
    long long int a[5],s=0,m=0,n=pow(10,9),i,c,b;
    for(i=0;i<5;i++)
    {
        scanf("%lld",&a[i]);
    s=s+a[i];
        if(m<a[i])
            m=a[i];
 
    }
    n=m;
     for(i=0;i<5;i++)  
     {
         if(n>a[i])
             n=a[i];
     }
    b=s-m;
    c=s-n;
    printf("%lld %lld",b,c);
    return 0;
}