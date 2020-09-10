#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c, mx;
    string s;
    cin>>n>>s;
    vector<vector<int>> v(n, vector<int>(3));

    for(int i=0; i<n; i++)
        cin>>v[i][0]>>v[i][1];

    c = count(s.begin(), s.end(), '1');
    mx=c;
    for(int j=1; j<=125; j++){
        for(int i=0; i<n; i++){
            if(j==v[i][1]+v[i][0]*v[i][2]){
                if(s[i]=='1'){
                    c--;
                    s[i]='0';
                }
                else{
                    c++;
                    s[i]='1';
                }
                v[i][2]++;
            }
        }
        //cout<<s<<endl;
        mx = max(mx, c);
    }
    cout<<mx;
    return 0;
}
