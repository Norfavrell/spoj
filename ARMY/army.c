#include <stdlib.h>
#include <stdio.h>

int main(){
	unsigned int T,a,b,ma,mb,t;
	scanf("%u\n",&T);
	while(T--){
		ma=mb=0;
		scanf("\n%u %u",&a,&b);
		while(a--&&scanf("%u",&t)) if(t>ma) ma=t;
		while(b--&&scanf("%u",&t)) if(t>mb) mb=t;
		if(mb>ma) printf("MechaGodzilla\n"); else printf("Godzilla\n");
	}
}
