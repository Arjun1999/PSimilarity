#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int i,arr[1000],n,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
       {scanf("%d",&arr[i]);
        sum+=arr[i];
       } 
    printf("%d",sum);
    
    return 0;
}
