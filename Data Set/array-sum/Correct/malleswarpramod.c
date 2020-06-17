#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N,*A,i,k,sum=0;
    
    scanf("%d",&N);
    if((N>=1)&&(N<=1000))
    {
        A = (int*)malloc(N*sizeof(int));
        
        for(i=0;i<N;i++)
        {
            scanf("%d",&k);
            
            if((k>=0)&&(k<=1000))
            {
                A[i]=k;
                sum += k;
            }
        }
        printf("%d",sum);
    }
    
    return 0;
}