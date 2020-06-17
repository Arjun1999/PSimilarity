#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a=0, i=0, sum=0;
    int s[999];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    scanf("%d", &a);
    for(i=0; i<a; i++){
        scanf("%d", &s[i]);
    }
    for(i=0; i<a; i++){
        sum=sum+s[i];
    }
    
    printf("%d", sum);
    return 0;
}
