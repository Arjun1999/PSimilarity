#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int add(int a,int b){
    return a+b;
}

int main() {
  int A[1000],n,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
        {
        scanf("%d",&A[i]);
        sum=add(sum,A[i]);
    }
    printf("%d",sum);
    return 0;
}
