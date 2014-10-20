//g++ 3442.cpp -o test && ./test < test.in
#include <stdio.h>
#include <vector>

unsigned int func(unsigned int a, unsigned int b){//a^b mod 10
	int res=a;
	for(int i=0;i<b-1;i++)
		res*=a;
	return res%10;
}

int main(){
	int t;
	scanf("%ud",&t);
	while(t--){
		int a,b,c=1;
		scanf("%d %d",&a,&b);
		int d=func(a,c++);
		if(b==0){ printf("1\n"); continue; }
		std::vector<int> vec;
		while(vec.empty() or (d=func(a,c++))!=vec[0])vec.push_back(d);
		printf("%d\n",vec[(b-1)%vec.size()]);
	}
}
