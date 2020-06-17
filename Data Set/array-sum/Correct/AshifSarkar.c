#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int sum=0 ,arr[1024],i,n;
    
    scanf("%d",&n);
        for(i=0;i<n;i++)
        {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    
    printf("%d",sum);
    return 0;
}
