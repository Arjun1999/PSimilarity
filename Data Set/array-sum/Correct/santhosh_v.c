#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    long int sum=0;
    int n,i,num;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&num);
        sum+=num;
    }
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
