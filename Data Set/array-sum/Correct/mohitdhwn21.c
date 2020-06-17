#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int numele,sum=0;
    scanf("%d",&numele);
    while(numele>0){
        int ele;
        scanf("%d",&ele);
        sum+=ele;
        numele--;
    }
    printf("%d",sum);
    return 0;
}
