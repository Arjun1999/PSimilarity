#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int a, sum = 0;
    int i;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    scanf("%d",&a);
    
    for(i = 0; i<a; i++){
        int no;
        scanf("%d",&no);
        sum += no;
    }
    
    printf("%d",sum);
    return 0;
}
