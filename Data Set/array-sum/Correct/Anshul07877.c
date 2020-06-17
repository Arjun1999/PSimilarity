#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,high,low,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
    }
    low=0;
    high=n-1;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
   if(n%2==0)
       {
       while(low<high)
           {
           sum = sum + a[low]+a[high];
           low++;
           high--;
       }
   }
    else
        {
        while(low < high)
            {
            sum = sum + a[low]+a[high];
            low++;
            high--;
        }
        sum = sum + a[low];
    }
    printf("%d",sum);
    return 0;
}
