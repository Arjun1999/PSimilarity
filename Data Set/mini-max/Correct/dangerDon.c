// Hacker rank
//  Mini-Max Sum
#include<stdio.h>
int main(void)
{   long long s,l,tmp,sum;
	int i=1;
	scanf("%lld",&s);
	sum=l=s;
	for(;i<5;i++){
		scanf("%lld",&tmp);
		if(tmp>l) l=tmp;
		if(tmp<s) s=tmp;
		sum+=tmp;
	}
	printf("%lld %lld",sum-l,sum-s);
	return 0;
}
