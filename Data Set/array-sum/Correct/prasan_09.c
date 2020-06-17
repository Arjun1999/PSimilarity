#include<stdio.h>
#include<math.h>
int main()
{
     
       int arr[1000];
       int i,n, total = 0;
       scanf("%d\n",&n);
       for(i = 0; i <n; i++)
       {
           scanf("%d",&arr[i]);
           total += arr[i];
       }
       printf("%d", total);
       return  0;
}