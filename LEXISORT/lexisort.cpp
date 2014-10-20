#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(char* a, char* b){
    for(int i=0;i<10;i++){
        if(a[i]<b[i]) return true;
        if(b[i]<a[i]) return false;
    }
    return true;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        vector<char*> data;
        for(int i=0;i<n;i++){
            char *tmp = new char[11];
            scanf("%s",tmp);
            data.push_back(tmp);
        }
        sort(data.begin(),data.end(),cmp);
        for(int i=0;i<data.size();i++){
            cout<<data[i]<<"\n";
            //delete data[i];
        }
    }
    return 0;
}