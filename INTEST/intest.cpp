#include <stdio.h>

int main(){
	int n,k,N=0,t;
	scanf("%d %d",&n,&k);
	while(n--&&scanf("%d",&t))
		if(!(t%k)) N++;
	printf("%d",N);
}
	