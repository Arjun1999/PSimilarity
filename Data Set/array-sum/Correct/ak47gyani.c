#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,temp=0,arr[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d ",&arr[i]);
    for(int j=0;j<n;j++)
        temp=temp+arr[j];
    printf("%d",temp);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
