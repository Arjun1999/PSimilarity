#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int sum=0,n,i,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&temp);
        sum=sum+temp;
    }
    printf("%d",sum);

      
    return 0;
}
