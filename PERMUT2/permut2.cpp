//g++ 379.cpp -o 379 && ./379 < 379.in
#include <stdio.h>
#include <vector>

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		if(n==0) return 0;
		int data[n],data2[n];
		for(int i=0;i<n;i++){
			scanf("%d",&data[i]);
			data2[data[i]-1]=i+1;
		}
		bool am=true;
		for(int i=0;i<n;i++)
			if(data[i]!=data2[i]){ am=false; break;  }
		printf("%s\n",(am ? "ambiguous" : "not ambiguous"));
	}
};
