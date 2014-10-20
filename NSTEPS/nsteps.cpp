//g++ 1112.cpp -o 1112 && ./1112 < 1112.in
#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int x,y,n=-1;
		scanf("%d %d",&x,&y);
		if(x==y or y==x-2) if(x%2==0 and y%2==0) n=x+y; else n=x+y-1;
		if(n!=-1) printf("%d\n",n); else  printf("No Number\n");
	}
}
