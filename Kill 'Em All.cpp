#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, r;
    cin>>t;
    while(t--){
        int c=0, a;
        cin>>n>>r;
        set<int> s;
        for(int i=0; i<n; i++){
            cin>>a;
            s.insert(a);
        }
        while(!s.empty()){
            if(*s.rbegin()-c<=0) break;
            else{
                s.erase(*s.rbegin());
                c+=r;
            }
        }
        cout<<c/r<<endl;
    }
    return 0;
}
