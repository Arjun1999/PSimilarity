#include<stdio.h>
int main()
{
	unsigned long a1,a2,a3,a4,a5;
	unsigned long res1,res2,res3,res4,res5,min=0,max=0;
	scanf("%lu%lu%lu%lu%lu",&a1,&a2,&a3,&a4,&a5);
	res1=a1+a2+a3+a4;
	res2=a1+a2+a3+a5;
	max=res1;
	min=res1;
	if(res2>=res1)
		max=res2;
	if(res2<res1)
		min=res2;
	res3=a1+a2+a4+a5;
	if(res3>=max)
		max=res3;
	if(res3<min)
		min=res3;
	res4=a1+a3+a4+a5;
	if(res4>=max)
		max=res4;
	if(res4<min)
		min=res4;
	res5=a2+a3+a4+a5;
	if(res5>=max)
		max=res5;
	if(res5<min)
		min=res5;
	printf("%lu %lu",min,max);	
}
