#include<stdio.h>
int main()
{
    int i,k=0,h=0;
    int a[100],max=a[0],min=a[0];
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[n]);
    }
    for(i=0;i<5;i++)
    {
        if(i==k)
        {
            continue;
        k++;
        }
        else{
            h+=a[i];
        }
     for(i=0;i<5;i++)  
     {
         a[i]=h;
         printf("%d",a[i]);
         
     }
    }
    for(i=0;i<5;i++)
    {
      if(max<a[i])
      {
          max=a[i];
        printf("%d",max);
    }
}
    for(i=0;i<5;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            printf("%d",min);
        }
    }
}