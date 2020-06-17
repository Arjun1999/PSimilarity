#include<stdio.h>

int main()
{
    long long int arr[5],tempSum=0,max=0,min=0;
    char i=0;
    while(i<5)
    {
        scanf("%lld",&arr[i]);
        i++;
    }
    i=0;
    while(i<5)
    {
        tempSum+=arr[i];
        i++;
    }
    min=tempSum;
    i=0;
    while(i<5)
    {
        max=max>(tempSum-arr[i])?max:(tempSum-arr[i]);
        min=min<(tempSum-arr[i])?min:(tempSum-arr[i]);
        i++;
    }   
    printf("%lld %lld",min,max);
    return 0;
}
