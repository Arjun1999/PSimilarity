#include<stdio.h>
#include<math.h>
int main()
{
    int a[10],b[10],i,m,max,min;
    int sum=0;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        sum=sum+a[i];
    }
        
    for(i=0;i<m;i++)     
    {
        b[i]=sum-a[i]; 
    }
    max=b[0];
    min=b[0];
    for(i=0;i<m;i++)
{
    if(max<b[i])
    {
            max=b[i];
    }
    if(b[i]<min)
    {
            min=b[i];
    }
}
    printf("%d",max);
    printf("\t%d",min);
    return 0;
}
