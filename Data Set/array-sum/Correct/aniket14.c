#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int sum =0; int n=0; int i=0; int num=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num);
        sum =sum+num;
    }
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
