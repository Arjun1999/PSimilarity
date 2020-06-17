#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i,j=0,k=0;
  long  int a[5],b=0,c=0,big,small;
    for(i=0;i<5;i++)
        scanf("%lld",&a[i]);
    big=a[0];
    small=a[0];
      for(i=1;i<5;i++)
        {
        if(a[i]>big)
            big=a[i];
    else    if(a[i]<small)
            small=a[i];
    }
    
    for(i=0;i<5;i++)
        {
       if(a[i]==small)
           j++;
        if(a[i]==big)
            k++;
        if(a[i]!=small||j>1)
            b=b+a[i];
        if(a[i]!=big||k>1)
            c=c+a[i];
    }
    printf("%lld %lld",c,b);
    
    return 0;
}
