#include <stdio.h>

int main(){
	unsigned short int T,a,n,d;
	scanf("%hu",&T);
	while(T--&&scanf("%hu %hu %hu",&n,&a,&d))
		printf("%u\n",(int)(((double)n/2)*(2*a+(n-1)*d)));
	return 0;
}
