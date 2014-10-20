#include <iostream>

using namespace std;

int main()
{
    int data[1000],tmp,next=0;
    while(cin>>tmp)
        data[next++]=tmp;
    for(int i=0;i<next;i++)
        cout<<data[next-i-1]<<endl;
    return 0;
}
