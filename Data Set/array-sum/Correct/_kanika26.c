#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sum(int n, int a[]);
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i,N,amount;
    scanf("%d", &N);
    int A[N];
    for(i=1;i<=N;i++)
        {
         scanf("%d", &A[i]);
        }
    amount=sum(N,A);
    printf("%d", amount);
     }
int sum (int n, int a[])
    {
     int m;
     int sum = 0;
     for (m=1;m<=n;m++)
         sum = sum + a[m];
    return(sum);
   }
