#include <iostream>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int l,c;
        scanf("%d %d",&l,&c);
        if(c==0){
            cout<<"NIE\n";
            continue;
        } else if(l==1){
            cout<<"TAK\n";
            continue;
        }
        if(c%(l-1)==0)
            cout<<"NIE\n";
        else
            cout<<"TAK\n";
    }
    return 0;
}
