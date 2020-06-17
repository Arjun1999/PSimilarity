#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size;
    scanf("%d",&size);
    int arr[size],i=0,sum=0;
    
    for(i=0;i<size;++i)
        scanf("%d",&arr[i]);
    
    for(i=0;i<size;++i)
        sum=sum+arr[i];
    
    printf("%d",sum);
    return 0;
}
