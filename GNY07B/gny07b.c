#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	unsigned short int N,n;
	char *d=malloc(3);
	float nr;
	scanf("%hu",&N);n=N;
	while(N--&&memset(d,0,3)&&scanf("%f %s",&nr,d)){
		printf("%hu ",n-N);
		if(d[0]=='k'&&d[1]=='g') printf("%.4f lb\n",nr*2.2046);
		else if(d[0]=='l'&&d[1]=='b') printf("%.4f kg\n",nr*0.4536);
		else if(d[0]=='l') printf("%.4f g\n",nr*0.2642);
		else if(d[0]=='g') printf("%.4f l\n",nr*3.7854);
	}
	free(d);
	return 0;
}
