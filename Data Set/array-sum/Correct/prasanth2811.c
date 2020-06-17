#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

        int n,a,i,sum=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            sum+=a;
        }    
        printf("%d",sum);
       return 0;
}
