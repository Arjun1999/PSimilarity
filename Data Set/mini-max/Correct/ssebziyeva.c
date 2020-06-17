#include <stdio.h>
#include <stdlib.h>

int main()
{
	long a[5];
	long i,j,imin,t;
   	for(i=0;i<5;i++){
   		scanf("%ld",&a[i]);
	   }
	   
	   for(i=0;i<4;i++){
	   	t=a[i];
	   	imin = i;
	   	for(j=i+1;j<5;j++){
	   			if(t>a[j]){
	   				t=a[j];
	   				imin = j;
				   }
		   }
		   
		   long c = a[i];
		   a[i]=t;
		   a[imin]=c;
	   }
	   
	   	t=a[0];
	   	for(i=1;i<4;i++){
   			t+=a[i];
	   }
	   	printf("%ld ",t);
	   	
	   	t=a[4];
	   	for(i=3;i>0;i--){
   			t+=a[i];
	   }
	   printf("%ld",t);
	   
	   		
	   	
	



    return 0;
}