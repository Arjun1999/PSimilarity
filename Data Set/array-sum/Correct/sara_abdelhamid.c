#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int i, N;
    int val,sum ;
    scanf("%d",&N);
    while (i<N)
        {
        scanf("%d",&val);
        sum =sum+val;
        i=i+1;
        
    }
    printf("%d",sum);
    
    
    
    
    
    return 0;
}
