
#include <stdio.h>

int simpleArraySum(int n, int ar[]) {
    int sum=0;
    for(int i=0;i<n;i++)
        sum=sum+ar[i];
    return sum;
}

int main() {
    int n,ar[50]; 
    scanf("%i", &n);
    
    for(int i = 0; i < n; i++){
       scanf("%d",&ar[i]);
    }
    int result = simpleArraySum(n, ar);
    printf("%d\n", result);
    return 0;
}
