#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int x,y,sum = 0;
    scanf("%d",&y);
    for(int i=0; i<y; i++){
        scanf("%d",&x);
        sum = sum + x;
    }
    printf("%d",sum);
    return 0;
}
