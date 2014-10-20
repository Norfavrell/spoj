//g++ 1163.cpp -o test && ./test<test.in
#include <stdio.h>
#include <string.h>
#include <vector>

int main(){
	char buffer[100];
	while(scanf("%s",buffer)!=EOF){
		bool cpp=false,java=false;
		short mask=0;
		std::vector<char> res;
		for(int i=0;i<strlen(buffer);i++){
			if(buffer[i]>='a' and buffer[i]<='z'){
				res.push_back(buffer[i]-(32*mask));
				mask=0;
			}
			else if(buffer[i]>='A' and buffer[i]<='Z')
				if(cpp){
					printf("Error!\n");
					mask=-1;
					break;
				} else {
					java=true;
					if(i==0){
						printf("Error!\n");
						mask=-1;
						break;
					}
					res.push_back('_');
					res.push_back(buffer[i]+32);
				}
			else if(buffer[i]=='_')
				if(java){
					printf("Error!\n");
					mask=-1;
					break;
				} else {
					cpp=true;
					if(i==0 or mask==1){
						printf("Error!\n");
						mask=-1;
						break;
					}
					mask=1;
				}
			else{
				printf("Error!\n");
				mask=-1;
				break;
			}
		}
		if(mask!=-1){
			if(mask==1){
				printf("Error!\n");
				continue;
			}
			for(std::vector<char>::iterator it=res.begin();it!=res.end();it++)
				printf("%c",*it);
			printf("\n");
		}
	}
};
