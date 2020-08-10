#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        int e=0, o=0, a=0;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i]%2==0) e++;
            else o++;
        }
        if(e%2==0) cout<<"YES";
        else if(n==2 && abs(v[0]-v[1])==1) cout<<"YES";
        else{
            sort(v.begin(), v.end());
            for(int i=0; i<n-1; i++){
                if(abs(v[i]-v[i+1])==1){cout<<"YES"; a=1; break;}
            }
            if(a==0) cout<<"NO";
        }
        cout<<endl;

    }
    return 0;
}
