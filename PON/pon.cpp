//g++ 288.cpp -o test && ./test<test.in
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

typedef unsigned long long _ull;

class MLPrimality{//Miller-Rabin's algorithm
	public:
	static unsigned long long timesMod(unsigned long long,unsigned long long,unsigned long long);//[1]*[2] mod [3]
	static unsigned long long powerMod(unsigned long long,unsigned long long,unsigned long long);//[1]^[2] mod [3]
	static bool millerRabinTest(unsigned long long,int*);//test if [1] is prime.. perform [2] tests
};

int main(){
	int tests[]={2,3,5,7,11,13,17,63};
	int t;
	_ull n;
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&n);
		printf("%s\n",MLPrimality::millerRabinTest(n,tests) ? "YES" : "NO");
	}
}
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
