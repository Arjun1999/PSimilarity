#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int N,i, Num[1000],sum =0;
int Sum (int N)
    {
        for (i = 0;i<N;i++)
        {
            scanf("%d",&Num[i]);
            sum += Num[i];
        }
    
return sum;
    }
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%d",&N);
    printf ("%d",Sum(N));
    return 0;
}
