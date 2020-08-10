#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    map<string, int> m;
    vector<string> v(10);
    cin>>s;
    for(int i=0; i<10; i++){
            cin>>v[i];
        m[v[i]] = i;
    }
    for(int i=0; i<8; i++){
        cout<<m[s.substr(i*10, 10)];
    }
    return 0;
}
