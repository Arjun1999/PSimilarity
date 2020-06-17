#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int solvethree(int m,int arr1[])
    {
    int sum=0;
    for(int i=0;i<m;i++)
        {
        sum+=arr1[i];
    }
   // printf("%d",sum);
    return sum;
} 
int main() {
    int n,final;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    final = solvethree(n,arr);
    printf("%d",final);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
