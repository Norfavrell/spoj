//g++ 400.cpp -o test && ./test < test.in
#include <stdio.h>
#include <string.h>

int main(){
	int n;
	char data[200];
	while(scanf("%d %s",&n,data)!=EOF){
		if(n==0) return 0;
		char tab[strlen(data)/n][n];
		for(int i=0;i<strlen(data);i++){
			tab[i/n][(i/n==0 or i/n%2==0) ? i%n : n-1-i%n ]=data[i];
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<strlen(data)/n;j++)
				printf("%c",tab[j][i]);
		}
		printf ("\n");
	}
}
