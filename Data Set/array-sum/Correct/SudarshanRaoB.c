#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int array[1000];
int main() {

    int i,N,sum=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
       {
        scanf("%d",&array[i]);
        sum+=array[i];
    }
    printf("%d\n",sum);    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
