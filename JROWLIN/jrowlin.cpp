#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a==0 and b==0)
        cout<<"NWR\n";
    else if(a==0 and b!=c)
        cout<<"BR\n";
    else if(a==0 and b==c)
        cout<<"NWR\n";
    else if(a!=0)
        printf("%.2lf\n",(c-b)/a);
    return 0;
}
