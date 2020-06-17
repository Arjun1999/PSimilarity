#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int arlength = 0;
    int sum = 0; 
    int newnum = 0;
   
    
    scanf("%d",&arlength);
    
    for(int i =0;i<arlength;i++){
        
        
        scanf("%d",&newnum);
        sum = sum + newnum;
        
    }
        
    printf("%d",sum);
    
    
    return 0;
}
