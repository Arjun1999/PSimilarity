  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int exp3(int A[], int n)
    {
    int i,sum=0;
      for(i=0;i<n;i++)
        {
       sum = sum + A[i];
        
    }
  return sum;
}

int main() {
int n;
    
    scanf("%d",&n);
    int A[n],i;
    for(i=0;i<n;i++)
        {
        scanf("%d",&A[i]);
        
    }
   int sum= exp3(A,n);
    
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

 
  