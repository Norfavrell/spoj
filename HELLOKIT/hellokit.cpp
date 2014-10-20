//g++ 5132.cpp -o test && ./5132 < test.in 
#include <stdio.h>
#include <string.h>

int main(){
	int s;
	char data[100];
	while(scanf("%s %d",data,&s)!=EOF){
		if(s==-1) break;
		for(int i=0;i<strlen(data);i++){
			for(int j=0;j<strlen(data)*s;j++)
				printf("%c",data[(j+i)%strlen(data)]);
			printf("\n");
		}
		s=-1;
	}
	return 0;
}
