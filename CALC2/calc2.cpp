#include <iostream>

using namespace std;

int main()
{
    int reg[10]={0,0,0,0,0,0,0,0,0,0};
    int answ[100];
    int il=0;
    char tmp;
    while(cin>>tmp){
        int a,b,res;
        scanf("%d %d",&a,&b);
        switch((int)tmp){
            case (int)'+':
                res=reg[a]+reg[b];
                break;
            case (int)'-':
                res=reg[a]-reg[b];
                break;
            case (int)'*':
                res=reg[a]*reg[b];
                break;
            case (int)'/':
                res=reg[a]/reg[b];
                break;
            case (int)'%':
                res=reg[a]%reg[b];
                break;
            case (int)'z':
                reg[a]=b;
                res=-1;
                break;
        }
        if(res!=-1){
            answ[il]=res;
            il++;
        }
    }
    for(int i=0;i<il;i++)
        cout<<answ[i]<<endl;
    return 0;
}
