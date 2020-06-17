#include<stdio.h>
int main()
{
    int n,i,sum=0;
    n=6;
    int arr[1000]={1,2,3,4,10,11};
    for(i=0;i<n;i++)
       sum=sum+arr[i];
    printf("%d",sum);

}
