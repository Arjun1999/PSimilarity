
#include <stdio.h>
#include<math.h>
int main()
         {
      unsigned long long int a[5],min,max,sum=0;
    int i;
        scanf("%lld",&a[0]);
    max=a[0];min=a[0];sum=a[0]+sum;
    for(i=0;i<5;i++){
        scanf("ll%d",&a[i]);
            if(max<a[i])
                printf(max=a[i]);
        if(max>a[i])
            printf(min=a[i]);
            sum=sum+a[i];
    }
    printf("%lld",sum-max,sum-max);
    return 0;
         }
