#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int ar[1000],n,i,sum=0;
    
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
         scanf("%d",&ar[i]);
        sum=sum+ar[i];
        
    }
    printf("%d",sum);
    return 0;
}
