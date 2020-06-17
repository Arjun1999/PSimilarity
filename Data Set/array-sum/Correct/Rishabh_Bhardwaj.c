#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int i,test,check = 0;
    scanf("%d",&test);
    
    int temp;
    
    for(i=0;i<test;i++) {
        scanf("%d",&temp);
        check = check + temp;
    }
    
    printf("%d",check);
    return 0;
}
