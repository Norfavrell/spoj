#include <iostream>

using namespace std;

int main()
{
    long long int c,su=0;
    while(cin>>c){
        long long int s=0;
        if(c==0){
            cout<<"0\n";
            continue;
        }
        s+=c;
        while(cin>>c) { s+=c; if(c==0) break; }
        cout<<s<<endl;
        su+=s;
    }
    cout<<su<<"\n";
    return 0;
}
