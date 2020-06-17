#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int n; int sum=0;
            scanf("%d",&n);
            
            int A[n];
            for(int i=0;i<n;i++)
                scanf("%d",&A[i]);
            for(int i=0;i<n;i++)
                sum+=A[i];
            printf("%d",sum);
            

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
