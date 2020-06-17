#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n , *p , i = 0 , sum = 0 ;
    scanf("%d",&n);
    p = (int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
         scanf("%d ",(p+i));
        sum += *(p+i);
    }
    printf("%d",sum);
    
    return 0;
}
