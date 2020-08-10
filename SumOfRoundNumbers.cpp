#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int j=0;j<t; j++){
        int n, i=1, a;
        vector<int> v;
        cin>>n;
        while(n!=0){
            a=n%10;
            if(a!=0){
                v.push_back(a*i);
            }
            i*=10;
            n/=10;
        }
        cout<<v.size()<<endl;
        for(int x: v) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}
