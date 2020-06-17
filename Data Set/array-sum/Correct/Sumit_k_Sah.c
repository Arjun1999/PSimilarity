#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
     do{scanf("%d",&n);}while(!(1<=n&&n<=1000));
    
      int a[n],i,sum=0;
     for(i = 0; i<n; i++)
        { do{scanf("%d",&a[i]);}while(!(1<=a[i]&&a[i]<=1000));
           sum = sum + a[i];
        }
    printf("%d",sum);
     
    return 0;
}
