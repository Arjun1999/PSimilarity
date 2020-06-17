#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {

   int N,i,sum=0;
    scanf("%d",&N);
        int A[1000];
        for(i=0;i<N;i++)
        {
        scanf("%d",&A[i]);
        sum = sum + A[i];
        }
        printf("%d",sum);
        return 0;/* Enter your code here. Read input from STDIN. Print output to STDOUT */

}