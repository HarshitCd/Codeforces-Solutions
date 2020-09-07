#include<bits/stdc++.h>
using namespace std;

void display(string& s, int i, vector<int>& v){
    int j=0, k=0;
    i-=25;
    for(int j=0; j<26; j++){
        if(s[i+j]=='?'){
            while(k<26 && v[k]!=0) k++;
            if(k<26) v[k]=1;
            s[i+j] = (char)(k+'A');
        }
    }
}

void setA(string& s){
    for(int i=0; i<s.size(); i++){
        if(s[i]=='?') s[i]='A';
    }
}

int main(){
    vector<int> v(26);
    string s;
    cin>>s;
    int c=0;

    if(s.size()<26){cout<<-1; return 0;}

    for(int i=0; i<26; i++){
        if(s[i]=='?'){c++; continue;}
        else if(v[s[i]-'A']==0) c++;
        v[s[i]-'A']++;
    }

    if(c==26) {display(s, 25, v); setA(s); cout<<s;}
    else{
        for(int j=26; j<s.size(); j++){
            if(s[j-26]=='?') c--;
            else if(v[s[j-26]-'A']==1) c--;
            if(s[j-26]!='?') v[s[j-26]-'A']--;

            if(s[j]=='?') c++;
            else if(v[s[j]-'A']==0) c++;
            if(s[j]!='?') v[s[j]-'A']++;
            if(c==26){
                display(s, j, v);
                setA(s);
                cout<<s; return 0;
            }
        }
        cout<<-1;
    }
    return 0;
}

