#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t,sum=0;
    scanf("%d",&t);
    int arr[t];
    for(int i=0;i<t;i++)
        {
        scanf("%d",&arr[i]);
        
    }
    for(int i=0;i<t;i++)
        {
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}
