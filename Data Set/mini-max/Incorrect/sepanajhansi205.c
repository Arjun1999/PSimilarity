#include<stdio.h>
int main()
{
   int arr[10],i,sum=0,arr1[10],max,min,n,j;
   scanf("%d",&n);
   for(i=0;i<n;++i)
    scanf("%d",&arr[i]);
   for(i=0;i<n;++i)
   {
       sum=0;
       for(j=0;j<n;++j)
       {
           if(arr[i] == arr[j])
            continue;
            else
            {
                sum=sum+arr[j];
            }
       }
       arr1[i]=sum;
   }
   max=arr1[0];
    for(i=1;i<n-1;++i)
    {
        if(arr1[i] < arr1[i+1])
        {
            max=arr1[i+1];
        }
    }
     min=arr1[0];
    for(i=1;i<n-1;++i)
    {
        if(arr1[i] > arr1[i+1])
        {
            min=arr1[i+1];
        }
    }
    printf("%d %d",min,max);
    return 0;
}
