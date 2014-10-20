#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i=0,s=0;
        scanf("%d",&n);
        while(floor((n/pow(5,i++)))>0)
            s+=floor((n/pow(5,i)));
        cout<<s<<'\n';
    }
    return 0;
}
