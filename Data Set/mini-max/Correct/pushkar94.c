#include<stdio.h>
#include<stdlib.h>
#define ll long long int

int cmpfunc(const void *a, const void *b){
	return(*(ll *)a - *(ll *)b);
}

int main(){
	ll a[5], i, j, mins = 0, maxs = 0;
	for(i = 0; i < 5; scanf("%lld", &a[i++]));
	qsort(a, 5, sizeof(ll), cmpfunc);
	for(i = 0, j = 4; i <= 3, j >= 1; i++, j--)	mins += a[i], maxs += a[j];
	printf("%lld %lld\n", mins, maxs);
	return 0;
}