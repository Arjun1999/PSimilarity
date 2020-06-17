#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, sum=0;
    
  scanf("%d",&n);

    
    int list[n];
    
    for(int i=0; i<n; i++){
        scanf("%d", &list[i]);
    }
    
    for(int z=0; z<n; z++){
        sum=sum+list[z];
    }
    
    printf("%d", sum);
    
    return 0;
}
