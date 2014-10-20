#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,b,c,h;
    double tb,tc;
    scanf("%d %d %d %d",&a,&b,&c,&h);
    tb=a+b;
    tc=sqrt(pow(c,2)+pow(tb,2));
    cout<<tc+h<<endl;
}
