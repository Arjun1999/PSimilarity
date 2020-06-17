#include<stdio.h>
#define max 50
main()
{
    int i,n=5,j,x;
    int arr[20];//={1,3,5,7,9};
   // printf("enter the value of n \n");;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
            scanf("%d",&arr[i]);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                arr[j]=arr[j+1]+arr[j];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
            }          
        }
    }
    printf("Our minimum sum is %d+%d+%d+%d=%d",arr[1],arr[2],arr[3],arr[4],arr[1]+arr[2]+arr[3]+arr[4]);
    
    printf("\n Our maximum sum is %d+%d+%d+%d=%d",arr[n-3],arr[n-2],arr[n-1],arr[n],arr[n-3]+arr[n-2]+arr[n-1]+arr[n]);
    
    
    
    
}