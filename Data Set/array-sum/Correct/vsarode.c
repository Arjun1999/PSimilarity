#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t,num;
    int sum=0;
       scanf("%d",&t);
    while(t-->0){
        scanf("%d",&num);
        sum+=num;
    }
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
