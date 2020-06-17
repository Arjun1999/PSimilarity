#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%i",&n);
    int a[1000],s=0;
    for (int i=0;i<n;i++)
    {scanf("%i",&a[i]);
     s+=a[i];
    }
    printf("%i",s);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
