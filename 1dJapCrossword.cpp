#include<bits/stdc++.h>
#include<string>
using namespace std;

void Jap_Crossword(string& s, int& slen){
    vector<int> v;
    int k=0, n;
    for(int i=0; i<slen; i++){
        if(s[i]=='B') k++;
        if(s[i]=='W' && k!=0){
            v.push_back(k);
            k=0;
        }
    }
    if(k!=0) v.push_back(k);
    n=v.size();
    cout<<n<<endl;
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
}

int main(){
    int l;
    string s;
    cin>>l>>s;
    Jap_Crossword(s, l);
    return 0;
}
