#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N,i,res=0;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
        res=res+arr[i];
    }
    printf("%d",res);
        

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
