#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a[1000];
    int i=0,s;
    scanf("%d",&s);
    int sum=0;
    for(i=0;i<s;i++){
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<s;i++){
        sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}
