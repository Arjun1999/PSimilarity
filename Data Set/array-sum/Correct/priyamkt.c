#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,sum=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
        {
        scanf("%d",&ar[i]);
        sum=sum+ar[i];
    }
    printf("%d\n",sum);
   
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
