#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, i, j;
    cin>>t;
    while(t--){
        long long s1=0, s2=0, c=0, ls=0, rs=0;
        cin>>n;
        i=0; j=n-1;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];

        while(i<=j){
            if(c%2==0){
                ls=0;
                while(i<=j && ls<=rs) ls+=v[i++];
                s1+=ls;
            }
            else{
                rs=0;
                while(i<=j && rs<=ls) rs+=v[j--];
                s2+=rs;
            }
            c++;
        }

        cout<<c<<" "<<s1<<" "<<s2<<endl;
    }
    return 0;
}
