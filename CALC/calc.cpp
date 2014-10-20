#include <iostream>

using namespace std;

int main()
{
    char c;
    while(cin>>c){
        int a,b;
        scanf("%d %d",&a,&b);
        switch(c){
            case '+':
                cout<<a+b<<endl;
                break;
            case '-':
                cout<<a-b<<endl;
                break;
            case '*':
                cout<<a*b<<endl;
                break;
            case '/':
                cout<<a/b<<endl;
                break;
            case '%':
                cout<<a%b<<endl;
                break;
        }
    }
    return 0;
}