#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int size;
    scanf("%d",&size);
    int arr[size],i,sum=0;
    for(i=0;i<size;i++)
        {
        scanf("%d",&arr[i]);
       sum=sum+arr[i];
       
    }
     printf("%d",sum);
    return 0;
}
