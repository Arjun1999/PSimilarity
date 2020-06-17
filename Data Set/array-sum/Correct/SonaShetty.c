#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,d,a[10000],sum=0;
    scanf("%d",&d);
     for(i=0;i<d;i++)
        {
        scanf("%d",&a[i]);
       
        sum+=a[i];
    }
    
           printf("%d",sum);
    
    return 0;
}
