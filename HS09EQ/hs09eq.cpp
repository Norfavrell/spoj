#include <iostream>
#include <math.h>

using namespace std;
typedef unsigned int uint;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        uint n,il=0,b2,c2,d2;
        scanf("%d",&n);
        for(int c=0;(c2=c*c*c)<=n;c++)
            for(int d=0;(d2=d*d*d*d)<=n;d++)
                for(int b=0;(b2=b*b)<=n;b++)
                    if(b2+c2+d2<=n)
                        il++;
                    else
                        break;
        cout<<il<<"\n";
    }
    return 0;
}
