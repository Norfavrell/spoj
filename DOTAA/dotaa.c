#include <stdio.h>

int main(void){
	unsigned short int T,n,m,d,t,h;
	scanf("%hu", &T);

	while(T--){
		scanf("%hu %hu %hu", &n, &m, &d);
		h = 0;

		while(n--){
			scanf("%hu", &t);
			h+=(t-1)/d;
		}

		printf("%s", h>=m ? "YES\n" : "NO\n");
	}
}