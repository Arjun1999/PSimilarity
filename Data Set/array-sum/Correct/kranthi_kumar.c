#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <malloc.h>

int main() {
            int i,j,k;
            scanf("%d",&i);
            int *a;
            a=(int *)malloc(i*sizeof(int));
            int sum=0;
            for(k=0;k<i;k++)
            {
                    scanf("%d",&a[k]);
                       
                
            }
            for(j=0;j<i;j++)
             {
               sum=sum+a[j];
             
            }
            printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
