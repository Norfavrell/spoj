//g++ 3410.cpp -o 3410 && ./3410 < 3410.in
#include <stdio.h>

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		if(n==0) return 0;
		printf("%d\n",(n*(n+1)*(2*n+1))/6);
	}
	return 0;
}
