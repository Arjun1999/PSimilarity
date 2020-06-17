#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int N,i;
    float sum=0.0;
   scanf("%d",&N);
    int a[N];
            for(i=0;i<N;i++)
                {      scanf("%d",&a[i]);
                  sum=sum+a[i];
                    
                   }   
printf("%.0f",sum);
   
    return 0;
}
