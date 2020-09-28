#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, i=0, c=0;
    string s;
    cin>>n>>a>>b>>s;

    if(a<b) swap(a, b);
    int x = count(s.begin(), s.end(), '.'), y=0;

    while(i<n){
        if(a==0) break;
        if(s[i]=='.'){
            i++;
            a--;
            y++;
        }
        i++;
    }

    x = x-y;
    y+=min(x, b);

    cout<<y;
    return 0;
}
