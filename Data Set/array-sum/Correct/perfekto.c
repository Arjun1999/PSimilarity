#include<stdio.h>
int main()
    {
    int i,sum=0,t;
    scanf("%d",&t);
    int arr[t];
    for(i=0;i<t;i++)
        {
        scanf("%d",&arr[i]);
     sum+= arr[i];
    }
    printf("%d",sum);
}