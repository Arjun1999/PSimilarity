#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int i,N;
    scanf("%d",&N);
    int j,a;
    j=0;
    for(i=0;i<N;i++)
        {
        scanf("%d",&a);
        j=j+a;
    }
    printf("%d",j);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
