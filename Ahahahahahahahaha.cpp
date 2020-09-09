#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, i;
    cin>>t;
    while(t--){
        int e=0, o=0, c=0, k;
        cin>>n;
        vector<int> v(n);
        for(i=0;i<n; i++){
            cin>>v[i];
            if(v[i]){
                if(i%2==0) o++;
                else e++;
            }
        }

        if(e+o>n/2){
            if((e+o)%2==1){for(i=0; i<n; i++){if(v[i]){v[i]=0; break;}} e--;}
            cout<<e+o<<endl;
            for(int x: v) if(x) cout<<x<<" ";
        }
        else{
            //if((n-e+o)%2==1){for(i=0; i<n; i++){if(v[i]==0){v[i]=1; break;}} e++;}
            cout<<n-o-e<<endl;
            for(int x: v) if(x==0) cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}
