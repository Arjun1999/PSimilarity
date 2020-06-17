#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int lol;
scanf("%d",&lol);
int N;
scanf("%d",&N);
int A[N];
for (int until = 0;until < N;until++)
{
    scanf("%d",&A[until]);
}
int h = 0;
for (int untill = 0;untill < N;untill++)
{
    if (A[untill] < h)
    {
        h += lol - A[untill];
        
    }
}

printf("%d",h);
    return 0;
}