#include <iostream>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c;
        scanf("%d %d",&a,&b);
        while(b!=0){
            c=a%b;
            a=b;
            b=c;
        }
        cout<<a<<"\n";
    }
    return 0;
}
