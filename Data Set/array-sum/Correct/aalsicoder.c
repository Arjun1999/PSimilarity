#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,n,sum=0;
    scanf("%d",&n);
    if(n>=0&&n<=1000){
        int arr[n];
    for(i=0;i<n;i++)
        {
        scanf("%d",&arr[i]);
        if(arr[i]>=0&&arr[i]<=1000)
        sum=sum+arr[i];
    }
    printf("%d",sum);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
