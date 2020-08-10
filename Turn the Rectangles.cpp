#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, w, h;
    cin>>n>>w>>h;
    int m=max(w, h);
    for(int i=0; i<n-1; i++){
        cin>>w>>h;
        if(m>=max(w, h)) m=max(w, h);
        else if(m>=min(w, h)) m=min(w, h);
        else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
