#include <iostream>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        while(true)
            if(a==0 or b==0)
                break;
            else if(a>b)
                a-=b;
            else if(b>a)
                b-=a;
            else if(b==a)
                break;
        cout<<a+b<<"\n";
    }
    return 0;
}
