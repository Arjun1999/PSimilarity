#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   
    int i,n,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("\n%d",&a[i]);
    }
        int sum=0;
        for(i=0;i<n;i++)
            {
            sum=sum+a[i];
        }
    printf("%d",sum);


        
    return 0;
}
