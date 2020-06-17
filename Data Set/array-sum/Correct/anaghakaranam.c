#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N=0,i,j,Sum=0;
   
    scanf("%d",&N);
    int *a=malloc(sizeof(int)*N);
       
    for(i=0; i< N;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<N;j++)
        {
            Sum+=a[j];
        }
    printf("%d",Sum);
    return 0;
}
