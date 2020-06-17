#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int sum=0,c,temp;
    scanf("%d",&c);
    for(int i=0;i<c;i++)
    {
        scanf("%d",&temp);
        sum+=temp;
    }
    printf("%d",sum);
    return 0;
}
