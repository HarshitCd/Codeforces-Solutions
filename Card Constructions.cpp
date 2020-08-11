#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x, s=1;
    cin>>n;
    vector<int> v(s);
    while(n--){
        int ans=0;
        cin>>x;
        while(x>v[s-1]){
            v.push_back(v[s-1]+2*s+(s-1));
            s++;
        }
        int i=s;
        while(i-1!=0){
            if(v[i-1]>x) i--;
            else {ans++; x-=v[i-1];}
        }
        //cout<<x<<" "<<i<<endl;
        cout<<ans<<endl;
    }
    //for(int i: v) cout<<i<<" ";
    return 0;
}
