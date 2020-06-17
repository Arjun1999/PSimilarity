#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    int sum=0;
    scanf("%d",&n);
    while(n--){
        int temp;
        scanf("%d",&temp);
        sum=sum+temp;
        
    }
    printf("%d\n",sum);
    return 0;
}
