#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        cout<<floor((2*a*b)/(a+b)+0.5)<<endl;
    }
    return 0;
}
