#include <stdio.h>
#include <stdlib.h>

int main(void){
	short int c=0;
	unsigned short int i, *dta;
	unsigned int tmp;
	int res;

	while(scanf("%hd", &c) && c!=-1){
		dta =(unsigned short int*)malloc(sizeof(unsigned short int)*c);
		tmp = 0;
		res = 0;

		for(i=0;i<c;i++){
			scanf("%u", &dta[i]);
			tmp+=dta[i];
		}

		if(tmp%c!=0){
			res=-1;
		} else {
			tmp/=c;
			for(i=0;i<c;i++) res+=(dta[i]>tmp ? dta[i]-tmp : 0);
		}

		printf("%d\n", res);
		free(dta);
	}

	return 0;
}