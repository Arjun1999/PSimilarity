#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    scanf("%d",&N);
    
    int Array[N];
    int k;
    for(k=0;k<N;k++)
        {
        scanf("%d",&Array[k]);
    }
    
    
    
    int i,sum=0;
    while( i >= 0 && i < N)
        {
        sum = sum + Array[i];
        i++;
    }
    
    printf("%d",sum);
    
    return 0;
}
