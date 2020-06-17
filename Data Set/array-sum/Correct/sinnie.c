#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define max 10000
void input(int n,int a[max])
    {
   int i=0;
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
    }
}
int solve(int n,int a[max])
    {int i;
     int b=0;
    for(i=0;i<n;i++)
        {
        b=b+a[i];
    }
     return b;
}

int main() {
    int a[max];
    int n;
    scanf("%d",&n);
    input(n,a);
    int sum= solve(n,a);
    printf("%d",sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
