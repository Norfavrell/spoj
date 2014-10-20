#include <iostream>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        bool p=true;
        if(n==1) p=false;
        for(int i=2;i<n;i++)
            if(n%i==0){ p=!p; break; }
        cout<<(p ? "TAK\n" : "NIE\n");
    }
    return 0;
}
