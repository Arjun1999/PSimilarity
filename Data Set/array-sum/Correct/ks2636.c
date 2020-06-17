#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int num = 0;
    int loopindex = 0;
    int sumarr[1000] = {0};
    int sum = 0;
    scanf("%d",&num);
    for(loopindex = 0;loopindex<num;loopindex++)
    {
        scanf("%d",&sumarr[loopindex]);  
        sum = sum + sumarr[loopindex];
    }
    printf("%d\n",sum);
    return 0;
}
