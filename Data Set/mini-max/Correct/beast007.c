#include<stdio.h>
int main()
{  long int i,j,t;
   long int arr[5];
    for(i=0;i<5;i++)
    {
        scanf("%ld",&arr[i]);
    }
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    printf("%ld ",arr[0]+arr[1]+arr[2]+arr[3]);
    printf("%ld",arr[1]+arr[2]+arr[3]+arr[4]);
return 0;
}
