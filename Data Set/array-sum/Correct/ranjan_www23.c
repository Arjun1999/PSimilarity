#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

      int i,a[1000],n,sum=0;
      scanf("%d\n",&n);
    for(i=0;i<=n;i++)
        {
          scanf("%d ",&a[i]);
          sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}
