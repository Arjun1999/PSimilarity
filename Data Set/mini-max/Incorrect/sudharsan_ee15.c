#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int i;int a,b,c,d,e;
    int sum=0;
    for(i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    a=sum-arr[0];
    b=sum-arr[1];
    c=sum-arr[2];
    d=sum-arr[3];
    e=sum-arr[4];
    
    if((a<b)&&(a<c)&&(a<d)&&(a<e))
        printf("%d",a);
    else if((b<a)&&(b<c)&&(b<d)&&(b<e))
        printf("%d",b);
    else if((c<a)&&(c<b)&&(c<d)&&(c<e))
        printf("%d",c);
    else if((d<a)&&(d<b)&&(d<c)&&(d<e))
        printf("%d",d);
    else if((e<a)&&(e<b)&&(e<c)&&(e<d))
        printf("%d",e);
    { if((a>b)&&(a>c)&&(a>d)&&(a>e))
        printf(" %d",a);
    else if((b>a)&&(b>c)&&(b>d)&&(b>e))
        printf(" %d",b);
    else if((c>a)&&(c>b)&&(c>d)&&(c>e))
        printf(" %d",c);
    else if((d>a)&&(d>b)&&(d>c)&&(d>e))
        printf(" %d",d);
    else if((e>a)&&(e>b)&&(e>c)&&(e>d))
        printf(" %d",e);
        }
    return 0;
    
        
        
        
        
        
}