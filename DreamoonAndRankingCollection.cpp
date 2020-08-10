#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n, a, x, v=0;
        set<int> s;
        cin>>n>>x;
        for(int j=0; j<n; j++){
            cin>>a;
            s.insert(a);
        }
        while(x>0 || s.find(v+1)!=s.end()){
            v++;
            if(s.find(v)==s.end()){
                x--;
                //cout<<v<<" ";
            }
        }
        cout<<v<<endl;
    }
    return 0;
}
