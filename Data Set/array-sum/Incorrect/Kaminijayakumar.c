#include<stdio.h>
int main()
{
    int n,arr_i,sum=0; 
    scanf("%d",&n);
    int arr[6]={1,2,3,4,10,11};
    for(arr_i=0; arr_i<n; arr_i++)
    {
       scanf("%d",&arr[arr_i]); 
      sum+=arr[arr_i];
    }
    printf("%d",sum);
 return 0;
}

