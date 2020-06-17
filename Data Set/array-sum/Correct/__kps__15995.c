#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int N,i;
    long long sum=0;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++)
        {scanf("%d",&arr[i]);}
    for(i=0;i<N;i++)
        {sum=sum+arr[i];}
    printf("%lld",sum);
    return 0;
}
