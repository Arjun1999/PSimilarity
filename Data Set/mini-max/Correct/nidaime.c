#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5];
    long int max=0,min=0;
    for(short i=0;i<5;i++)
        scanf("%ld",&a[i]);
    short s=0,l=0;
    for(short i=1;i<5;i++)
        {
          if(a[i]<a[s])
             s=i;
          if(a[i]>a[l])
              l=i;
        }
    for(short i=0;i<5;i++)
     {
        if(i!=s)
            max+=a[i];
        if(i!=l)
            min+=a[i];
    }
    printf("%ld %ld",min,max);
        return 0;
}
