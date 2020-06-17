#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i=0,size=0,temp=0;
    scanf("%d",&size);
    long sum=0;
    
    for(i=0;i<size;i++)
    {
        scanf("%d",&temp);
        sum+=temp;
    }
    printf("%ld",sum);
    return 0;
}
