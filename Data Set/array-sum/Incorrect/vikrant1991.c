#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int a[5]; 
    int i,sum=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];          
        }
    printf("%d",sum);
    return 0;
}
