#include <stdio.h>
int main()
{
    int a[5],sum=0,i,fournumsum[5],maxsum=0,minsum=0;
    for(i=0;i<5;i++)
    {
printf("enter the data-");
    scanf("%d",&a[i]);
    }   for(i=0;i<5;i++)
    {
        sum=sum+a[i];
}
    for(i=0;i<5;i++)
    {fournumsum[i]=sum-a[i];
}
    minsum=fournumsum[0];
    for(i=0;i<5;i++)
    {if(maxsum<fournumsum[i])
        maxsum=fournumsum[i];
     if(minsum>fournumsum[i])
         minsum=fournumsum[i];
}
    printf("%d   %d",minsum,maxsum);
}
