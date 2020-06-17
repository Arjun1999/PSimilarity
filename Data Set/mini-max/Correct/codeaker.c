#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
  long  int *a = malloc(sizeof(long int) * 5);
    for(int i = 0; i < 5; i++){
       scanf("%ld",&a[i]);
    }
    for(int i=0;i<5;i++)
        {int min=a[i];
        for(int j=i;j<5;j++)
        if(a[j]<min)
          {  min=a[j];
           a[j]=a[i];
           a[i]=min;}
        }
    long s1=0,s2=0;
    for(int i=0;i<5;i++)
        {if(i<4)
            s1+=a[i];
         if(i>0)
             s2+=a[i];
            }
    printf("%ld %ld",s1,s2);
    return 0;
}
