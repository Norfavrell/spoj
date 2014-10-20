//g++ 1025.cpp -o test && ./test<test.in
#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		unsigned long long sum=0;
		scanf("%d",&n);
		int m[n],f[n];
		for(int i=0;i<n;i++)
			scanf("%d",&m[i]);
		for(int i=0;i<n;i++)
			scanf("%d",&f[i]);
			
		bool s=true;
		while(s){
			s=false;
			for(int i=0;i<n;i++){
				if(i<n-1 and m[i]>m[i+1]){
					int tmp=m[i];
					m[i]=m[i+1];
					m[i+1]=tmp;
					s=true;
				}
				if(i<n-1 and f[i]>f[i+1]){
					int tmp=f[i];
					f[i]=f[i+1];
					f[i+1]=tmp;
					s=true;
				}
			}
		}
		for(int i=0;i<n;i++)
			sum+=m[i]*f[i];
		printf("%lld\n",sum);
	}
}
