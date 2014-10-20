#include <iostream>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        unsigned int n;
        scanf("%u",&n);
        if(n>10)
            cout<<"0 0\n";
        else{
            int f=1;
            for(int i=1;i<=n;i++)
                f*=i;
            cout<<(f%100-f%10)/10<<" "<<f%10<<"\n";
        }
    }
    return 0;
}
