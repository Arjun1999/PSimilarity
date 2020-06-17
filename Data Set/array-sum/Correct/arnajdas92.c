#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i=0,sum=0;
    scanf("%d",&n);
    int *arr = (int *)malloc(sizeof(int)*n);
    while(i<n)
    {
        scanf("%d",&arr[i]);
        i++;
    }
    for(i=0;i<n;i++){
        sum += arr[i];
    }
    printf("%d",sum);    
    return 0;
}
