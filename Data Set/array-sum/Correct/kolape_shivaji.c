#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int num,sum=0,i;
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++)
        {
    scanf("%d",&arr[i]);
        }
    
    for(i=0;i<num;i++)
        {
        sum=sum+arr[i];
        }
    printf("%d",sum);
    
    return 0;
}
