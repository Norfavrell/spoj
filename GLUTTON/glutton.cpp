#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,tm;
        unsigned int s=0;
        scanf("%d %d",&n,&m);
        for(int i=0;i<n;i++){
            scanf("%d",&tm);
            s+=floor(86400/tm);
        }
        int a;
        if(s%m==0)
            a=s/m;
        else
            a=s/m+1;
        cout<<a<<endl;
    }
    return 0;
}
