#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N,M,res=0;
    scanf ("%d\n",&N);
    for (int i=0;i<N;i++)
        {
        scanf ("%d ",&M);
        res=res+M;
    }
    printf ("%d",res);
    /* Enter code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
