#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i,s=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
          scanf("%d",&arr[i]);
          s=s+arr[i];
          
    }
    printf("%d",s);
    return 0;
}