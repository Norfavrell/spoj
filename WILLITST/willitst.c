#include <stdio.h>

int main(void){
	long long n;
	scanf("%lld", &n);

	printf("%s", (n&(n-1))==0L  ? "TAK" : "NIE");

	return 0;
}