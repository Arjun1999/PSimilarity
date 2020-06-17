#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a,b,sum=0,i;
    scanf("%d", &a);
    for(i=0;i<a;i++){
        scanf("%d",&b);
        sum=sum+b;
    }
    printf("%d",sum);
    return 0;
}
