#include<stdio.h>
int main()
{
    int a[5],b,c,d,e,f,l1,l2;
    for(int i=0;i<5;i++)
        scanf("%d",&a[i]);
    b=a[1]+a[2]+a[3]+a[0];
    c=a[2]+a[3]+a[4]+a[1];
    d=a[0]+a[3]+a[4]+a[5];
    e=a[0]+a[1]+a[2]+a[4];
    f=a[1]+a[0]+a[3]+a[4];
    if(b<c&&d<c&&e<c&&f<c)
        l1=c;
    else if(b<d&&e<d&&f<d)
        l1=d;
    else if(e<b&&f<b)
       l1=b;
    else if(e<f)
        l1=f;
    else 
        l1=e;
    if(b>c&&d>c&&e>c&&f>c)
        l2=c;
    else if(b>d&&e>d&&f>d)
        l2=d;
    else if(e>b&&f>b)
        l2=b;
    else if(e>f)
        l2=f;
    else 
        l2=e;
    printf("%d %d",l2,l1);
    return 0;
}