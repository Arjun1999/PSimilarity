#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int t,i,sum,j;
    sum=0;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&j);
        sum=sum+j;
    }
    printf("%d",sum);
    return 0;
}
