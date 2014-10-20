#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    vector<int> data;
    while(t--){
        int n;
        scanf("%d",&n);
        data.push_back(n);
    }
    sort(data.begin(),data.end());
    for(int i=0;i<data.size();i++)
        cout<<data[i]<<"\n";
    return 0;
}
