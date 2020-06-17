#include<stdio.h>


int main()
    {
        int arr[15], N,i,sum=0;
        //printf("enter size of array");
        scanf("%d",&N);
       // printf("enter array elements");
        for(i=0;i<N;i++)
        {
            scanf("%d",&arr[i]);
            sum=sum+arr[i];
            
        }
    printf("%d",sum);
    return 0;
    
}