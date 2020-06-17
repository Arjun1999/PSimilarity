#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d" ,&n);
    int i,sum=0;
    int *arr=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d" ,&arr[i]);
    for(i=0;i<n;i++)
        sum+=arr[i];
    
    printf("%d" ,sum);
    
    return 0;
}
