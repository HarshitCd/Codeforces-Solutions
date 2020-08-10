#include<bits/stdc++.h>
using namespace std;

int Sushi(vector<int>& v, int n){
    vector<int> c;
    int number=1, ans=1, x;
    for(int i=0; i<n-1; i++){
        if(v[i]!=v[i+1]){
            c.push_back(number);
            number=1;
        }
        else
            ++number;
    }
    c.push_back(number);
    for(int i=0; i<c.size()-1; i++){
        x=(c[i]<c[i+1])?c[i]:c[i+1];
        //cout<<ans<<" "<<x<<endl;
        ans=(ans>x)?ans:x;
    }
    return 2*ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    cout<<Sushi(v, n);
    return 0;
}
