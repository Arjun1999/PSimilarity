#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int i,j,s=0,n;
    scanf("%d", &n);
    for(i=0;i<n;i++)
        {
        scanf("%d", &j);
        s+=j;
    }
    printf("%d", s);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
