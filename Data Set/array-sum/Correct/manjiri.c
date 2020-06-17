#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N,num,sum=0,i;
   // int a[1000];
    scanf("%d",&N);
   int*a =(int*)calloc(N,N*sizeof(int));
    for (i=0 ; i<N ; i++)
        {
            scanf ("%d",&num);
            a[i] = num;
            sum = sum +a[i];
    
        }
    printf("%d",sum);
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
