#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*int sum(int *arr,int n)
{
    int i,sum=0;    
    for(i=0;i<=n;i++)
        sum = sum + arr[i];
    return sum;
}*/
int main() 
{
    int arr[1000],n,i,answer,sum=0;
    //printf("Enter the number of inputs");
    scanf("%d",&n);
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
        sum = sum + arr[i];
    //answer = sum(arr , n);
    printf("%d",sum);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
