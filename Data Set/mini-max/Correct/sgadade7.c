#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    long int arr[5],temp=0,ans1=0,ans2=0;
    int i;
    for(i=0;i<=4;i++)    
          scanf("%ld ",&arr[i]);      
    
    for(int x=0; x<5; x++)
	{
		for(int y=0; y<5-1; y++)
		{
			if(arr[y]>arr[y+1])
			{
				temp = arr[y+1];
				arr[y+1] = arr[y];
				arr[y] = temp;
			}
		}
	}
    
    for(i=0;i<=3;i++)
    {
         ans1+=arr[i];  
    }
    for(i=1;i<=4;i++)
    {
         ans2+=arr[i];  
    }
    printf("%ld %ld",ans1,ans2);
    
    return 0;
}

