#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d",&n);
    int i,a[n],tot=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        tot+=a[i];
    }
    printf("%d",tot);
    return 0;
}
