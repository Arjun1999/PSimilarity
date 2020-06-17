#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int sum=0,n,temp;
    int i;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
        {
            scanf("%d",&temp);
            sum+=temp;
        }
    
    printf("%d",sum);
    return 0;
}
