#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, j=-1, c=0;
    string s;
    cin>>n>>s;
    if(n%2==1) cout<<"No";
    else{
        for(int i=0; i<n; i++){
            if(s[i]=='('){
                j++;
            }
            else if(s[i]==')' && j!=-1){
                j--;
            }
            else if(s[i]==')' && j==-1) c++;
            //cout<<i<<"-"<<j<<endl;
            if(c==2) break;
        }
        if(c==2 || j>0) cout<<"No";
        else cout<<"Yes";
        cout<<endl;
    }
    return 0;
}
