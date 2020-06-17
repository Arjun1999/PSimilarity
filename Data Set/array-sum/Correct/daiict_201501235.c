#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{ int a[1000],x;
            scanf("%d",&x);
            int i;
        long sum=0;
            for(i=0;i<x;i++)
            {scanf("%d",&a[i]);
              sum+=a[i];
            }printf("%ld",sum);
            return 0;
}
