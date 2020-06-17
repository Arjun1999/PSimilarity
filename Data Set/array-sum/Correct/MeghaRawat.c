#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   
    int n,i,sum=0;
   scanf("%d",&n);
    
    int arr[(2*n)-1];
    for(i=0;i<2*n;i+=2)
        scanf("%d",&arr[i]);
    for(i=0;i<2*n;i+=2)
        { sum=sum+arr[i];}
    printf("%d",sum);
    return 0;
}
