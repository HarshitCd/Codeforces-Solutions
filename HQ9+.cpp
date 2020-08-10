#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<char> s;
    s.insert('H');
    s.insert('Q');
    s.insert('9');
    string sa;
    getline(cin, sa);
    for(int i=0; sa[i]!='\0'; i++){
        if(s.find(sa[i])!=s.end()){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
