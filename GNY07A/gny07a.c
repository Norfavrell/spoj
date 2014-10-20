#include <stdio.h>
#include <stdlib.h>

int main(){
	unsigned short int N,n,r;
	char i,t;
	scanf("%hu",&N); n=N;
	while(N--){
		scanf("%hu ",&r);
		printf("%hu ",n-N);
		i=0;
		while(scanf("%c",&t)&&t!='\n') if((++i)!=r) printf("%c",t);
		printf("\n");
	}
}
