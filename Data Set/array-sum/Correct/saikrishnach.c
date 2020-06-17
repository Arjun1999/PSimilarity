#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N = 0 ,i=0 ,sum =0;
    
    scanf("%d",&N);
    
    int * a = (int *) malloc (sizeof(int)*N);
    for(i=0;i<N;i++){
        a[i]=0;
        scanf("%d",&a[i]);
    }

    for(i=1;i<N;i++){
        a[i] =a[i-1] +a[i];                 
    }
       
    printf("%d",a[--i]);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}