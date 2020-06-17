#include<stdio.h>

int main()
{
    int arr[5],i,j,temp=0;
    long long int sum[5],max,min;

    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    sum[0]=arr[0]+arr[1]+arr[2]+arr[3];
    sum[1]=arr[0]+arr[1]+arr[2]+arr[4];
    sum[2]=arr[0]+arr[1]+arr[3]+arr[4];
    sum[3]=arr[0]+arr[2]+arr[3]+arr[4];
    sum[4]=arr[1]+arr[2]+arr[3]+arr[4];

    for(i=0;i<5;i++){
        for(j=0;j<(5-i);j++){
            if(sum[j]>sum[j+1]){
                temp=sum[j];
                sum[j]=sum[j+1];
                sum[j+1]=temp;
            }
        }
    }

    printf("%lld  %lld",sum[0],sum[4]);

return 0;
}
