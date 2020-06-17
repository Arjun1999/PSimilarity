#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a[1000],i,sum=0,num;
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("%d",sum);
    
    return 0;
}
