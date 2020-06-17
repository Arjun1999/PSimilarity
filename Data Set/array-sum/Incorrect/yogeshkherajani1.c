#include <stdio.h>
#include <conio.h>
int main(){
    int n,i,sum=0; 
    printf("Enter your upper bound = ")
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++){
            
        scanf("%d",&arr[i]);
    }
    
    for(i=0; i<n; i++){
            
        sum=sum+arr[i];
    }
    
    printf("%d",sum);
    return 0;
}
