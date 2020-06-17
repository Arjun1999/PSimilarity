#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int arr[1000],N,i,sum=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
       {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++)
        {
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}
