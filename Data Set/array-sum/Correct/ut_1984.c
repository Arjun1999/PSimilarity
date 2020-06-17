#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sum(int* ,int );
int main() {
    int n;
    scanf("%d\n", &n);
    int A[n];
    for (int i=0;i<n;i++){
        scanf("%d ", &A[i]);
    }
    int r=sum(A,n);
    printf("%d",r);
}
int sum(int A[],int n){
   int s=0;
    for(int i=0;i<n;i++)
        s=s+A[i];
    return (s);
}
