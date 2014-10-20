#include <iostream>

using namespace std;

int fib(int n){
    if(n<2) return n;
    return fib(n-1)+fib(n-2);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        cout<<fib(n)%m<<"\n";
    }
    return 0;
}
