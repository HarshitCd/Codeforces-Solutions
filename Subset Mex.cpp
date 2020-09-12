#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t;
    cin>>t;
    while(t--){
        cin>>n;
        int a;
        map<int, int> m;
        for(int i=0; i<n; i++){
            cin>>a;
            m[a]++;
        }
        a=0;
        for(int i=0; i<101; i++){
            if(m[i]==0){a+=i; break;}
            else m[i]--;
        }
        for(int i=0; i<101; i++){
            if(m[i]==0){a+=i; break;}
            else m[i]--;
        }
        cout<<a<<endl;
    }
    return 0;
}
