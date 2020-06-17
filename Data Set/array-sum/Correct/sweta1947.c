#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    int l;
    scanf("%d",&n);  
    int A[n];
    for(int i = 0;i<n;i++)
        {
        scanf("%d",&A[i]);
    }
    for(int j =0;j<n;j++)
        {
        l = l+A[j];
    }
    printf("%d",l);
    return 0;
}
