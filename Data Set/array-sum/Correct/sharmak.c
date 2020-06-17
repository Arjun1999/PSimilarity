#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum(int arr[],int n)
    {
    
    int summ = 0, i=n;
    while(i--)
        {
        summ = summ + arr[i];
    }
    return summ;
}

int main() {

    int n ;
    scanf("%d",&n);
    int arr[n];
    int t=n,i=0;
    while(t--)
        {
        scanf("%d",&arr[t]);
    }
    int summ = sum(arr,n);
    printf("%d",summ);
    return 0;
}
