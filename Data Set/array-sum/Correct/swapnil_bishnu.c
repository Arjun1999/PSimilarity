#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,count = 0,i;
    scanf("%d",&n);
    
    int a;
    for(i = 0; i < n; i++)
        {
        scanf("%d",&a);
        count = count + a;
    }
    printf("%d \n",count);
    return 0;
}
