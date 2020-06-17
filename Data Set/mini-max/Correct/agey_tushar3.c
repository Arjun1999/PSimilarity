#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void sort(long long int *A, long long int *b, long long int *c, long long int *d, long long int *e){
    long long int temp = 0;
    long long int a[5];
    a[0] = *A;
    a[1] = *b;
    a[2] = *c;
    a[3] = *d;
    a[4] = *e;
    int x, y;
    for(x=0; x<5; x++)

	{

		for(y=0; y<5-1; y++)

		{

			if(a[y]>a[y+1])

			{

				int temp = a[y+1];

				a[y+1] = a[y];

				a[y] = temp;

			}

		}

	}

    *A = a[0];
    *b = a[1];
    *c = a[2];
    *d = a[3];
    *e = a[4];
    
}
int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    sort(&a, &b, &c, &d, &e);
    printf("%lld %lld", a + b + c + d, b + c + d + e);
    return 0;
}
