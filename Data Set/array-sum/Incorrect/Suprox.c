#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    int b;
    b=0;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<=n;i++)
        {
        scanf("%d",&A[i]);
    }
  for(i=0;i<=n;i++)
      {
      b=b+A[i]+A[i+1];
  }
    print b;
}
