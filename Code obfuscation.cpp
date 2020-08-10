#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<char> c;
    int a=0;
    for(int i=0; i<s.size(); i++){
        if(find(c.begin(), c.end(), s[i])==c.end()){
            if((char)('a'+a)==s[i]){c.push_back(s[i]); a++;}
            else{cout<<"NO"; return 0;}
        }
    }
    cout<<"YES";
    return 0;
}
