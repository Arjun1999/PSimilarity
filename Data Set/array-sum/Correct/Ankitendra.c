#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int sum=0,temp,iter,i;
    scanf("%d",&iter);
    for(i=0;i<iter;i++){
        scanf("%d",&temp);
        sum+=temp;
    }
    printf("%d\n",sum);
    return 0;
}
