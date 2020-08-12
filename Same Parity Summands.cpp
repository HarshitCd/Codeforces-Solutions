#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k, a;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<int> v;
        if(n<k) cout<<"NO";
        else if(n>=k && n%2==k%2){
            cout<<"YES\n";
            while(k--!=1){
                cout<<1<<" ";
                n--;
            }
            cout<<n;
        }
        else if(n%2==1 && k%2==0) cout<<"NO";
        else{
            a = (n%2==0)?2:1;
            while(k!=1){
                if(n<=0) break;
                v.push_back(a);
                n-=a;
                k--;
            }
            if(k!=1 || n==0) cout<<"NO";
            else{
                cout<<"YES\n";
                for(int x: v) cout<<x<<" ";
                cout<<n;
            }
        }

        cout<<endl;
    }
    return 0;
}
