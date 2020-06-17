#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int arr[1000];
    int sum=0;
    int i;
    int n=0;
    for(i=0;i<1000;i++){
     arr[i]=0;   
    }
    scanf("%d",&n);
    for(i=0;i<1000;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("%d",sum);
   // scanf("")   
    return 0;
}
