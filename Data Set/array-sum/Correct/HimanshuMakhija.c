#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//int test(int n, int a[n]){
   //return b;


int main() {
int b=0,n,i;
    scanf("%d",&n);
    int a[n];
        for (i=0;i<n;i++)
          {
            scanf("%d",&a[i]);
              b=a[i]+b;
          }
    printf("%d",b);
    return 0;
}
