
#include <stdio.h>

int main(){
    int n,c=0; 
    scanf("%d",&n);
    int arr[100];
    for(int i = 0;i< n;i++){
       scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++)
      c=c+arr[j];
    printf("\n sum is %d",c);
    return 0;
}
