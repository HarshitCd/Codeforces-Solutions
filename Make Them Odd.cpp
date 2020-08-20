#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, a, sum;
    cin>>t;
    while(t--){
        cin>>n;
        set<int> s;
        sum=0;
        for(int i=0;i<n; i++){
            cin>>a;
            if(a%2==0) s.insert(a);
        }
        while(s.empty()==false){
            a = *s.rbegin();
            s.erase(a);
            a/=2;
            if(a%2==0) s.insert(a);
            sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}
