#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin>>t;
    for(int j=0; j<t; j++){
        int ans=0;
        vector<int> v(3);
        cin>>v[0]>>v[1]>>v[2];
        sort(v.rbegin(), v.rend());
        if(v[0]!=0){ans++; v[0]--;}
        if(v[1]!=0){ans++; v[1]--;}
        if(v[2]!=0){ans++; v[2]--;}
        if(v[0]!=0 && v[1]!=0){ans++; v[0]--; v[1]--;}
        if(v[1]!=0 && v[2]!=0){ans++; v[1]--; v[2]--;}
        if(v[2]!=0 && v[0]!=0){ans++; v[0]--; v[2]--;}
        if(v[0]!=0 && v[1]!=0 && v[2]!=0){ans++;}
        //cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" ";
        cout<<ans<<endl;
    }
    return 0;
}
