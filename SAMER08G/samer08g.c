#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	signed short int N,c,p,*d,i;
	while(scanf("%hu",&N)&&N){
		d=malloc(2*N);
		memset(d,0,2*N);
		char valid=1;
		i=0;
		while(i<N){
			scanf("%hu %hd",&c,&p);
			if(valid&&i+p>=0&&i+p<N&&d[i+p]==0) d[i+p]=c;
			else valid=0;
			i++;
		}
		i=0;
		if(valid) while(i<N){ printf("%hu ",d[i]); i++;}
		else printf("-1");
		printf("\n");
		free(d);
	}
}
