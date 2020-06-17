#include<stdio.h>
int main()
{int i,sum1=0,sum2=0;
    int arr[5];
    int largest=arr[0];
    int smallest=arr[0];
    for(i=0;i<5;i++)
    scanf("%d",&arr[i]);
    for(i=1;i<5;i++)
    {       if(arr[i]>largest)
            largest=arr[i];
     if(arr[i]<smallest)
         smallest=arr[i];
}
    for(i=0;i<5;i++)
    {if(arr[i]!=largest)
            sum1+=arr[i];
    if(arr[i]!=smallest)
        sum2+=arr[i];
    
    }
    printf("%d %d",sum1,sum2);
    return 0;
    
    
}