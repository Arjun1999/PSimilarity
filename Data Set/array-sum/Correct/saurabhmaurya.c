#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    int i;
    scanf("%d",&n);
    int sum=0,temp;
    for(i=0;i<n;i++)
        {
         scanf("%d",&temp);
        sum+=temp;
    }
    printf("%d",sum);
    return 0;
}
