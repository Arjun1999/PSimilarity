#include <stdio.h>
int main()
{
    long int arr[5],temp,max,min; 
    int i,j;
    for(i=0;i<5;i++)
    {
          scanf("%ld",&arr[i]);
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            } 
        }
    }
    min=(arr[1]+arr[2]+arr[3]+arr[0]);
    max=(arr[1]+arr[2]+arr[3]+arr[4]);
    printf("%ld %ld",min,max);
    return 0;
}
