#include<stdio.h>
#include<math.h>
int main()
{
    long int sum1,sum2,sum3,sum4,sum5;
    int i,arr[5];
    for(i=0;i<5;i++)
    {
        scanf("%d ",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    sum1=arr[0]+arr[1]+arr[2]+arr[3];
    sum2=arr[1]+arr[2]+arr[3]+arr[4];
    sum3=arr[2]+arr[3]+arr[4]+arr[0];
    sum4=arr[3]+arr[4]+arr[0]+arr[1];
    sum5=arr[4]+arr[0]+arr[1]+arr[2];
    
    if((sum1<sum2)&&(sum1<sum3)&&(sum1<sum4)&&(sum1<sum5))
        printf("\n%ld",sum1); 
    if((sum2<sum1)&&(sum2<sum3)&&(sum2<sum4)&&(sum2<sum5))
        printf("\n%ld",sum2); 
    if((sum3<sum2)&&(sum3<sum1)&&(sum3<sum4)&&(sum3<sum5))
        printf("\n%ld",sum3); 
    if((sum4<sum2)&&(sum4<sum3)&&(sum4<sum1)&&(sum4<sum5))
        printf("\n%ld",sum4); 
    if((sum5<sum2)&&(sum5<sum3)&&(sum5<sum4)&&(sum5<sum1))
        printf("\n%ld",sum5);
    if((sum1>sum2)&&(sum1>sum3)&&(sum1>sum4)&&(sum1>sum5))
        printf(" %ld",sum1); 
    if((sum2>sum1)&&(sum2>sum3)&&(sum2>sum4)&&(sum2>sum5))
        printf(" %ld",sum2); 
    if((sum3>sum2)&&(sum3>sum1)&&(sum3>sum4)&&(sum3>sum5))
        printf(" %ld",sum3);
    if((sum4>sum2)&&(sum4>sum3)&&(sum4>sum1)&&(sum4>sum5))
        printf(" %ld",sum4); 
    if((sum5>sum2)&&(sum5>sum3)&&(sum5>sum4)&&(sum5>sum1))
        printf(" %ld",sum5); 
   return 0;
    
}
