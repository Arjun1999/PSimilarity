#include<stdio.h>
void sort(long long int x[]);
int main()
{
    long long int a[5],t[5],i,j,n,minSum=0,maxSum=0,sum=0;
//    printf("enter all 5 integers=");
    for(i=0;i<5;i++)
    {
        scanf("%lld",&a[i]);
        sum=sum+a[i];
    }
    for(i=0;i<5;i++)
    {
        t[i]=sum-a[i];
 //       printf("%lld ",t[i]);
    }
    sort(t);
    printf("%lld ",t[0]);
    printf("%lld",t[4]);






return 0;
}
void sort(long long int x[])
{
     long long int i, j, t,m=5;

       for(i = 1; i <= m-1; i++)
          for(j = 1; j <= m-i; j++)
             if(x[j-1] >= x[j])
             {
                t = x[j-1];
                x[j-1] = x[j];
                x[j] = t;
             }
}
