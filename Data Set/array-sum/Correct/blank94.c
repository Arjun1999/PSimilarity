#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[1000],num,i,sum=0;
    scanf("%d",&num);
    for (i=0;i<=num-1;i++)
    {
           scanf("%d",&arr[i]);
        
    }
    for (i=0;i<=num-1;i++)
        sum += arr[i];
        printf("%d\n",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
