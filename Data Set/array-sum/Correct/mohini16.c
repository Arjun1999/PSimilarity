#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i=0;
    int n=0;
    int sum=0;
    int A[1000]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&A[i]);
        sum=sum+A[i];
    }
   
    printf("%d",sum);
   
        
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
