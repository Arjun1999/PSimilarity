#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N,num;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%d",&N);
   // printf("%d\n",N);
    int A[N], i;
    int sum=0;
    for(i=1;i<=N;i++)
        {scanf("%d",&num);
         //printf("\n%d",num);
         sum=sum+num;
        
    }
    printf("%d\n",sum);
    return 0;
}
