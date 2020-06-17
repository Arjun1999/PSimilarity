#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,i,inp,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&inp);
        sum+=inp;
        
    }
    printf("%d",sum);
    return 0;
}
