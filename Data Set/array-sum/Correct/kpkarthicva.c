#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a[1000],i,t,s=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
        {
          scanf("%d",&a[i]);
          s+=a[i];
        }
 printf("%d",s);
    return 0;
}
