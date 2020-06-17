#include <stdio.h>
#include<stdlib.h>
#define int long long int


signed main()
{

    int n,m,i,j,a=0;
    int sum=0;
	
    int  arr1[1010]={0}; 
    int arr2[1010]={0};


        //scanning n
        scanf("%lld",&n);
        //running loop n times to find sum
        for(i=0;i<n;i++)
        {
                scanf("%lld",&a);
                sum+=a;
        }
        
        //storing time intervals in an array
        scanf("%lld",&m);
        for(i=0;i<m;i++)
        {
                scanf("%lld%lld",&arr1[i],&arr2[i]);
        }
        //checking if time intervals are greater than sum
        int flag=0;
        for(i=0;i<m;i++)
        {
            if((arr2[i]-arr1[i]+1) >= sum)
                {
                    printf("%lld\n",sum); 
                     flag=1;
                     return 0;
                }
               
        }
        int ans=0,check=0;
        if(flag==0)
        {
        //checking if individual time in array is smaller
            for(i=0;i<m;i++)
            {    
                if(arr1[i] >= sum) 
                {
                    check=1;
                    ans=arr1[i];
                    break;
                }
                else if(arr2[i] >= sum)
                {
                    check=1;
                    ans=arr2[i];
                    break;  
                }
                
           }
           
        }
        if(check==1)printf("%lld\n",ans);
        else printf("-1\n");
	
	return 0;

}


