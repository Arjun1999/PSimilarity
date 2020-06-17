#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,t,sum,num;
    t=sum=0;
    scanf("%d",&n);
    for (t;t<n;t++){
        scanf("%d",&num);
        sum+=num;
    }
    printf("%d",sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
