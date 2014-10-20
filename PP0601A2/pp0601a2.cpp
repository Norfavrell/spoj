#include <iostream>

using namespace std;

int main()
{
    int tmp,last=42,il=0;
    while(cin>>tmp){
        cout<<tmp<<endl;
        if(tmp==42 and last!=42)
            il++;
        if(il==3)
            return 0;
        last=tmp;
    }
    return 0;
}