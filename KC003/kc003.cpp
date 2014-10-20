#include <iostream>

using namespace std;

int main()
{
    double data[3],tmp[2];
    while(scanf("%lf %lf %lf",&data[0],&data[1],&data[2])!=EOF){
        int bi=0;
        double a,b,c;
        for(int i=0;i<3;i++)
            if(data[i]>data[bi])
                bi=i;
        c=data[bi];
        switch(bi){
            case 0:
                a=data[1];
                b=data[2];
                break;
            case 1:
                a=data[0];
                b=data[2];
                break;
            case 2:
                a=data[0];
                b=data[1];
        }
        if(a+b>c and a+c>b and b+c>a) cout<<"1\n"; else cout<<"0\n";
    }

    return 0;
}