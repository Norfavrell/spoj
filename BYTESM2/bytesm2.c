#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	unsigned short int T,w,h,i,tmp;
	unsigned short int *line, *prev_line;
	scanf("%hu", &T);

	while(T--){
		scanf("%hu %hu", &h, &w);
		line = calloc(w, sizeof(unsigned short int));
		prev_line = calloc(w, sizeof(unsigned short int));

		while(h--){
			for(i=0;i<w;i++){
				scanf("%hu", &line[i]);

				tmp = prev_line[i];
				if(i>0 && prev_line[i-1]>tmp) tmp = prev_line[i-1];
				if(i<w-1 && prev_line[i+1]>tmp) tmp = prev_line[i+1];
				
				line[i]+=tmp;
			}

			memcpy(prev_line, line, w*sizeof(unsigned short int));
			memset(line, 0, w*sizeof(unsigned short int));
		}

		tmp = 0;
		for(i=0;i<w;i++) tmp = prev_line[i]>tmp ? prev_line[i] : tmp;
		printf("%hu\n", tmp);

		free(line);
		free(prev_line);
	}

	return 0;
}