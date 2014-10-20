#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<char,int> map;
    map['a']=1;
    map['b']=2;
    map['c']=3;
    map['d']=4;
    map['e']=5;
    map['f']=6;
    map['g']=7;
    map['h']=8;
    map['i']=9;
    map['k']=10;
    map['l']=20;
    map['m']=30;
    map['n']=40;
    map['o']=50;
    map['p']=60;
    map['q']=70;
    map['r']=80;
    map['s']=90;
    map['t']=100;
    map['v']=200;
    map['x']=300;
    map['y']=400;
    map['z']=500;
    char data[26];
    int s=0;
    scanf("%s",&data);
    for(int i=0;i<strlen(data);i++)
        s+=map[data[i]];
    cout<<s<<endl;
    return 0;
}
