#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N;
    scanf("%d",&N);
    if(N<1 || N>1000)
        exit(0);
    int arr[N];
    for(int i=0;i<N;i++)
    {    
        scanf("%d",&arr[i]);
    if(arr[i]<0 || arr[i]>1000)
        exit(0);
    }
    long int sum;
    for(int i=0;i<N;i++)
        sum=sum+arr[i];
    printf("%ld",sum);
    
    return 0;
}
