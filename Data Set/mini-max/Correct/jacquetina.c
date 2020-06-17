#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   long int a[5],b[5],c=0;
    int i;
      for(i=0;i<5;i++)
    scanf("%ld",&a[i]);
    for(i=0;i<5;i++)
    c=c+a[i];   
    for(i=0;i<5;i++)
    {
        b[i]=c-a[i];
    }
     long int large=-1,small=b[0];
    for(i=0;i<5;i++){
        if(b[i]>large)
            large=b[i];
        if(small>b[i])
            small=b[i];
    }
    printf("%ld %ld",small,large);
    return 0;
}
