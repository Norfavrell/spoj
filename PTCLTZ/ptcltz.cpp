#include <iostream>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int s;
        scanf("%d",&s);
        int cr=s,in=0;
        while(cr!=1){
            if(cr%2!=0)
                cr=3*cr+1;
            else
                cr=cr/2;
            in++;
        }
        cout<<in<<endl;
    }
    return 0;
}