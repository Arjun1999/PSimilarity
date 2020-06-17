#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int s,sum=0;
    scanf("%d",&s);
    int arr[s];
    for(int i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    /*for(int i=0;i<s;i++)
    {
        printf("%d",arr[i]);
        
    }*/
    printf("%d",sum);
    return 0;
}
