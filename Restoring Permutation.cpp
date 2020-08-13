#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, i, j;
    cin>>t;
    while(t--){
        set<int> s;
        cin>>n;
        vector<int> a(2*n), b(n);
        int f=1;
        for(i=0; i<n; i++){
            cin>>b[i];
            a[2*i] = b[i];
            s.insert(b[i]);
        }
        j=1;
        for(int i=1; i<2*n; i+=2){
            if(a[i]==0){
                int tmp = a[i-1];
                while(s.find(tmp)!=s.end()) tmp++;
                if(tmp<=2*n){
                    a[i]=tmp;
                    s.insert(tmp);
                }
                else{
                    f=0;
                    break;
                }
            }
        }
        if(f){
            for(int i=0; i<2*n; i++) cout<<a[i]<<" ";
        }
        else cout<<-1;
        cout<<endl;
    }
    return 0;
}
