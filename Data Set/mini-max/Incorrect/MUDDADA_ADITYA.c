#include <stdio.h>


int main()
{
    int i,j,c;
    int a[i],b[j];
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<5;j++)
    {
        if(j=0)
            b[0]=a[i+1]+a[i+2]+a[i+3]+a[i+4];
        else if(i=1)
            b[1]=a[i-1]+a[i+1]+a[i+2]+a[i+3];
        else if(i=2)
            b[2]=a[i-2]+a[i-1]+a[i+1]+a[i+2];
        else if(i=3)
            b[3]=a[i-3]+a[i-2]+a[i-1]+a[i+1];
        else if(i=4)
            b[4]=a[i-4]+a[i-3]+a[i-2]+a[i-1];
    }
    for(j=0;j<5;j++)
    {
        if
            (b[j]>b[j+1])
        {
            c=b[j];
            b[j]=b[j+1];
            b[j+1]=c;
        }
            
    }
    
    printf("%d %d",b[0] ,b[4]);
    return 0;
}