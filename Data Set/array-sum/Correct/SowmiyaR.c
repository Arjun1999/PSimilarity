#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int number,i,arr[1500],sum=0;
    scanf("%d",&number);
    for(i=0;i<number;i++)
    {
       scanf("%d",&arr[i]); 
    }
    for(i=0;i<number;i++)
    {
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}
