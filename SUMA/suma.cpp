#include <iostream>

using namespace std;

int main()
{
    int tmp;
    int a=0;
    int answ[1000];
    while(cin>>tmp){
        answ[a]=tmp;
        a++;
    }
    int total=0;
    for(int i=0;i<a;i++){
        total+=answ[i];
        cout<<total<<endl;
    }
}
