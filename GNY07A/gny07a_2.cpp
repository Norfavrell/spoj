//g++ 2523.cpp -o 2523 && ./2523 < 2523.in
#include <stdio.h>
#include <string.h>

int main(){
	int n,t=0;
	scanf("%d",&n);
	while(n--){
		int p;
		char data[81];
		scanf("%d %s",&p,&data);
		for(int i=p-1;i<strlen(data);i++)
			data[i]=data[i+1];
		printf("%d %s\n",++t,data);
	}
};
