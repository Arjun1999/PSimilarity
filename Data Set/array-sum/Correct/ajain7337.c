#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int sum=0,tmp;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&tmp);
        sum+=tmp;
    }
    printf("%d",sum);
    return 0;
}
