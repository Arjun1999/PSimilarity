#include <stdio.h>


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int array[1002],N,i,sum=0,a;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
       scanf("%d",&a);
        sum=sum+a;
    }
     printf("%d",sum);
    
    return 0;
}
