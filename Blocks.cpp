#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, w=0, b=0, i=0, j;
    string s;
    map<char, vector<int>> m;
    cin>>n>>s;
    for(char x: s){
        (x=='W')? w++: b++;
        m[x].push_back(i+1);
        i++;
    }
    if(w%2 && b%2) cout<<-1;
    else{
        if(w%2==0){
            b=0;
            for(i=0; i<w; i+=2) b+=m['W'][i+1]-m['W'][i];
            cout<<b<<endl;
            for(i=0; i<w; i+=2){
                for(j=m['W'][i]; j<m['W'][i+1]; j++) cout<<j<<" ";
            }
        }
        else{
            w=0;
            for(i=0; i<b; i+=2) w=w+m['B'][i+1]-m['B'][i];
            cout<<w<<endl;
            for(i=0; i<b; i+=2)
                for(j=m['B'][i]; j<m['B'][i+1]; j++) cout<<j<<" ";
        }
    }
    return 0;
}
