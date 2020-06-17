#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
        
    int i,j,temp;
    int sum = 0;
    scanf("%d",&j);
    for(i=0;i<j;i++){
        scanf("%d",&temp);
        sum=sum+temp;
    }
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
