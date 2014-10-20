#include <iostream>
#include <cstring>

using namespace std;

#define T_SIZE 1001

char* string_merge(char *, char *);

int main(){
  int t,n;
  char S1[T_SIZE], S2[T_SIZE], *S;

  cin >> t; /* wczytaj liczbę testów */
  cin.getline(S1,T_SIZE);
  while(t){
    cin.getline(S1,T_SIZE,' ');
    cin.getline(S2,T_SIZE);
    S=string_merge(S1,S2);
    cout << S << endl;
    delete[] S;
    t--;
  }
  return 0;
}

char* string_merge(char *a, char *b){
    int l=(strlen(a)<strlen(b) ? strlen(a) : strlen(b));
    char *r = new char[l];
    for(int i=0;i<l;i++){
        r[i*2]=a[i];
        r[i*2+1]=b[i];
    }
    return r;
}
