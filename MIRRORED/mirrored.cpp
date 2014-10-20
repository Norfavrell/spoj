//g++ 3378.cpp -o test && ./test<test.in
#include <stdio.h>

int main(){
	printf("Ready\n");
	char data[2]={0,0},tmp;
	while(true){
		bool mirror=false;
		data[0]=data[1]=0;
		while(data[0]==0 or data[1]==0){
			scanf("%c",&tmp);
			if(tmp!=10)
				data[data[0]==0 ? 0 : 1]=tmp;
		}
		if(data[0]==32 and data[1]==32) break;
		switch(data[0]){
			case 'q':
				if(data[1]=='p') mirror=true;
			case 'p':
				if(data[1]=='q') mirror=true;
			case 'd':
				if(data[1]=='b') mirror=true;
			case 'b': 
				if(data[1]=='d') mirror=true;
		}
		printf("%s pair\n",mirror ? "Mirrored" : "Ordinary");
	}
}
