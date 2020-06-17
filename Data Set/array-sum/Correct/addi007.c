#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    int no,i;
    scanf("%d",&no);
    int arr[no];
   for( i=0;i<no;i++)
       {
    scanf("%d",&arr[i]);
       
   }
    
    int sum=0;
    for(i=0;i<no;i++)
        {
        sum=sum + arr[i];
    }
    printf("%d",sum);
    return 0;
}
