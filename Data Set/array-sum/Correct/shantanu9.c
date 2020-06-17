#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int t,A[1000],i,sum=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
        {
        scanf("%d",&A[i]);
        sum=sum+A[i];
    }
    printf("%d",sum);
    return 0;
}
