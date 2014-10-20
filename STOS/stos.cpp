#include <iostream>

using namespace std;

int main()
{
    int stack[9];
    int pos=0;
    char tmp;
    while(cin>>tmp){
        switch(tmp){
            case '+':
                int tmp2;
                scanf("%d",&tmp2);
                if(pos>9)
                    cout<<":("<<endl;
                else{
                    stack[pos]=tmp2;
                    pos++;
                    cout<<":)"<<endl;
                }
                break;
            case '-':
                if(pos==0)
                    cout<<":("<<endl;
                else
                    cout<<stack[--pos]<<endl;
                break;
        }
    }
    return 0;
}
