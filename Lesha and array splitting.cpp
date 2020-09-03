#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c=0, s=0, j=1, k=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i]){c++; s+=v[i];}
    }

    if(c>=1){
        cout<<"YES\n"<<c<<endl;
        for(int i=0; i<n; i++){
            if(k==1 && v[i]!=0){
                cout<<j<<" "<<i<<endl;
                j=i+1;
            }
            else if(k==0 && v[i]!=0) k++;
        }
        cout<<j<<" "<<n;
    }
    else cout<<"NO";
    return 0;
}
