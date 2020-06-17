#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
            int t;
            scanf("%d",&t);
            int array[t];
            int i;
            for(i=0;i<t;i++)
                scanf("%d",&array[i]);
    
            int sum =0;
            for(i=0;i<t;i++)
                {
                sum+=array[i];
            }
            printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
