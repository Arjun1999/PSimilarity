#include<stdio.h>
int main(){
	int i,j,k,d,e;
	int c=0;
	int a[10]={1,2,3,4,5};
	int b[10]={};
	for(i=0;i<5;i++){
		c=0;
		for(j=0;j<5;j++){
			if(i!=j){
				c=c+a[j];
			}
		}
		b[k]=c;
		k++;
	}
	d=b[0];
	e=b[0];
	for(k=0;k<5;k++){
		if(d>b[k]){
		
		d=b[k];
		if(e<b[k])
		{
			e=b[k];
		}
		}
		}

printf("%d %d",d,e);
}
		