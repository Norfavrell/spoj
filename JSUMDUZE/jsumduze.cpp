#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int t;
    scanf("%d\n",&t);
    while(t--){
        stack<int> a1,a2,a3;
        char tmp[1000];
        scanf("%s",&tmp);
        for(int i=0;i<strlen(tmp);i++)
            a1.push(tmp[i]-48);
        scanf("%s",&tmp);
        for(int i=0;i<strlen(tmp);i++)
            a2.push(tmp[i]-48);
        int r=0;
        while(!a1.empty() or !a2.empty()){
            int a=0,b=0;
            if(!a1.empty()){
                a=a1.top();
                a1.pop();
            }
            if(!a2.empty()){
                b=a2.top();
                a2.pop();
            }
            a3.push((a+b+r)%10);
            r=(a+b+r)/10;
        }
        if(r!=0)
            a3.push(r);
        while(!a3.empty()){
            cout<<a3.top();
            a3.pop();
        }
        cout<<"\n";
    }
    return 0;
}
