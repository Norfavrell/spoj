//g++ 919.cpp -o test && ./test
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

class MLPrimality{//Miller-Rabin's algorithm
	public:
	static unsigned long long timesMod(unsigned long long,unsigned long long,unsigned long long);//[1]*[2] mod [3]
	static unsigned long long powerMod(unsigned long long,unsigned long long,unsigned long long);//[1]^[2] mod [3]
	static bool millerRabinTest(unsigned long long,int*);//test if [1] is prime.. perform [2] tests
};
typedef unsigned long long _ull;

_ull MLPrimality::timesMod(_ull a, _ull b, _ull n){
	_ull res=0,mask=1;
	while(mask){
		if(mask & b)
			res=(res+a)%n;
		a=(a<<1)%n;
		mask<<=1;
	}
	return res;
};
_ull MLPrimality::powerMod(_ull a, _ull b, _ull n){
	_ull res=1,st=a,mask=1;
	while(mask){
		if(mask & b)
			res=timesMod(res,st,n);
		st=timesMod(st,st,n);
		mask<<=1;
	}
	return res;
};
bool MLPrimality::millerRabinTest(_ull n, int *tests){
	if(n==2 or n==3) return true;
	if(n<2 or n%2==0) return false;
	srand((unsigned)time(NULL));
	_ull d=n-1,a,x;
	int j,s=0;
	while(d%2==0){
		s++;
		d/=2;
	}
	for(int i=0;i<sizeof(tests);i++){
		a=2+(tests[i]%((n-2)-2));
		x=powerMod(a,d,n);
		if(x==1 || x==n-1) continue;
		j=1;
		while(j<s and x!=n-1){
			x=timesMod(x,x,n);
			if(x==1) return false;
			j++;
		}
		if(x!=n-1) return false;
	}
	return true;
};

_ull rec(_ull numb){
	if(numb==0) return 1;
	return (numb+1234567890)%2147483648;
};
static int tests[]={ 2, 3, 5, 7, 11, 13 , 17};
int main(){
	_ull s=0,t=0;
	while(t<10000){
		s=rec(s);
		printf("%d",MLPrimality::millerRabinTest(s,tests));
		t++;
	}
}
