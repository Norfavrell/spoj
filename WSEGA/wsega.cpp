#include <iostream>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,t,s=0;
        scanf("%d",&n);
        s+=n;
        for(int i=0;i<n;i++){
            scanf("%d",&t);
            s+=t;
        }
        s--;
        cout<<s<<endl;
    }
    return 0;
}
