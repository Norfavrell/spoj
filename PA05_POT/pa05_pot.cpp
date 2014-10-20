#include <iostream>

using namespace std;
typedef unsigned int uint;

uint mulmod(uint,uint,uint);
uint powmod(uint,uint,uint);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        cout<<powmod(a,b,10)<<"\n";
    }
    return 0;
}

uint mulmod(uint a, uint b, uint n){
    uint m,w=0;
    for(m=1;m;m<<=1){
        if(b&m) w=(w+a)%n;
        a=(a<<1)%n;
    }
    return w;
}

uint powmod(uint a, uint e, uint n){
    uint m,p=a,w=1;
    for(m=1;m;m<<=1){
        if(e&m) w = mulmod(w,p,n);
        p=mulmod(p,p,n);
    }
    return w;
}
