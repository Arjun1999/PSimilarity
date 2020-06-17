#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int simpleArraySum(int n, int ar_size, int* ar) {
    /*
   public class Solution {

    public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
        int sum=0;
        int n=sc.nextInt();
        for(int i=0;i<n;i++)
        {
             sum = sum+(sc.nextInt());
        }
        System.out.println(sum);
    }
}*/
    
    {
         int sum=0,sum1=1,sum2=2;
          for(int i=0;i<n;i++)
          {
               sum= sum1+sum2;
          }
    printf("%d",sum);
    }
     return 1;
    
}

int main() {
  
    int n; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = simpleArraySum(n, n, ar);
    printf("%d\n", result);
    return 0;
}
