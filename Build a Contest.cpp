#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> m;
    int n, mm, c=0, a;
    cin>>n>>mm;
    for(int i=0; i<mm; i++){
        cin>>a;
        if(m[a]==0) c++;
        m[a]++;
        if(c==n){
            for(int i=1; i<=n; i++){
                m[i]--;
                if(m[i]==0) c--;
            }
            cout<<1;
        }
        else cout<<0;
    }
    return 0;
}
