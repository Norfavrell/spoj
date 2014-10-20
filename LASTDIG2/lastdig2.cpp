//g++ 5699.cpp -o test && ./test<test.in
#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		unsigned long long b;
		int a;
		char buffer[1000];
		scanf("%s %lld",buffer,&b);
		a=buffer[strlen(buffer)-1]-48;
		printf("%c\n",a!=0&&b!=0 ? "111124863971464655556666793184269191"[(a-1)*4+((b==0 ? 1 : b)-1)%4] : a==0?'0':'1');
	}
};
