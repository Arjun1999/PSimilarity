#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    int i;
    int temp;
    int sum=0;
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&temp);
        sum=sum+temp;
    }
    printf("%d",sum);
    return 0;
}
