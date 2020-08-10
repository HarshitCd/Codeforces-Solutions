#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<char> s;
    s.insert('a');
    s.insert('e');
    s.insert('i');
    s.insert('o');
    s.insert('u');
    string w;
    cin>>w;
    int n=w.size()-1;
    for(int i=0; i<n; i++){
        if(w[i]=='n') continue;
        if(s.find(w[i])==s.end()){
            if(s.find(w[i+1])==s.end()){
                cout<<"NO";
                return 0;
            }
        }
    }
    if(s.find(w[n])!=s.end() || w[n]=='n') cout<<"YES";
    else cout<<"NO";
    return 0;
}
