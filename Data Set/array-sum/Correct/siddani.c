#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N;
    int sum = 0;
    int ele;
    
    scanf("%d",&N);
    while( N--){
        scanf("%d",&ele);
        sum += ele;
    }
    printf("%d\n",sum);
    return 0;
}
