#include <iostream>

using namespace std;

int main()
{
    int data[123];
    for(int i=0;i<123;i++)
        data[i]=0;
    int t;
    scanf("%d ",&t);
    while(t--){
        char a;
        while(scanf("%c",&a)!=EOF)
            if(a=='\n')
                break;
            else
                data[(int)a]++;
    }
    for(int i=97;i<=122;i++)
        if(data[i]>0)
            cout<<(char)i<<" "<<data[i]<<"\n";
    for(int i=65;i<=90;i++)
        if(data[i]>0)
            cout<<(char)i<<" "<<data[i]<<"\n";
    return 0;
}