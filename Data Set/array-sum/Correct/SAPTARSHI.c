
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
        int a[1000]={0};
        int i,j=0,k;
        scanf("%d",&k);
       // printf("Enter a value between 1000\n");
        for(i=0;i<k;i++)
            {
                scanf("%d",&a[i]);
                if(a[i]>1000)
                    {
                        printf("\nPlease enter valid number\n");
                        a[i]=0;
                        i--;
                        //continue;
                    }
                j=j+a[i];
            } 
            printf("%d",j);
             return 0;


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
