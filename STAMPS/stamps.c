#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void quicksort(unsigned short int *p,unsigned short int s){
	if(s<=1) return; 
	unsigned short int *l=malloc(0),*h=malloc(0),ls=0,hs=0,i;
	for(i=1;i<s;i++)
		if(p[i]<p[0]){h=realloc(h,(hs+1)*2); h[hs++]=p[i];}
		else {l=realloc(l,(ls+1)*2); l[ls++]=p[i]; }
	memcpy(&p[ls],&p[0],2);
	if(ls){
		quicksort(l,ls);
		memcpy(&p[0],&l[0],ls*2);
	}
	if(hs){
		quicksort(h,hs);
		memcpy(&p[ls+1],&h[0],hs*2);
	}
	free(l);
	free(h);
}

int main(){
	unsigned int N,n,a,b,s,i;
	scanf("%u",&N); n=N;
	while(n--&&scanf("%u %u",&a,&b)){
		printf("Scenario #%u:\n",N-n);
		unsigned short int *d=malloc(b*2);
		s=0;
		for(i=0;i<b;i++) scanf("%hu",&d[i]);
		quicksort(d,b);
		for(i=0;i<b&&s<a;i++) s+=d[i];
		if(s<a) printf("impossible\n\n"); else printf("%u\n\n",i);
	}
}
