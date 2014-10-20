//g++ 2157.cpp -o test && ./test <test.in
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFFER_SIZE 200
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char buffer[3][BUFFER_SIZE];//,p2[BUFFER_SIZE],p3[BUFFER_SIZE];
		int pos=-1;
		scanf("%s + %s = %s",&buffer[0],&buffer[1],&buffer[2]);
		for(int i=0;i<3;i++){
			for(int j=0;j<strlen(buffer[i]);j++)
				if(buffer[i][j]>'9' or buffer[i][j]<'0'){
					pos=i;
					break;
				}
			if(pos!=-1)
				break;
		}
		switch(pos){
			case 0:
				printf("%d + %s = %s\n",atoi(buffer[2])-atoi(buffer[1]),buffer[1],buffer[2]);
				break;
			case 1:
				printf("%s + %d = %s\n",buffer[0],atoi(buffer[2])-atoi(buffer[0]),buffer[2]);
				break;
			case 2:
				printf("%s + %s = %d\n",buffer[0],buffer[1],atoi(buffer[0])+atoi(buffer[1]));
				break;
			default:
				return -1;
		}
	}
}
