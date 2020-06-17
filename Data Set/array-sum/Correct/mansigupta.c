#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a,i,sum;sum=0;
    scanf("%d",&a);
    int arr[2000];
        for(i=0;i<a;i++)
        {
        scanf("%d ",&arr[i]);
    }
    for(i=0;i<a;i++)
        {
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}
