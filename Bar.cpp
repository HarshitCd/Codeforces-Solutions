#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> v = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
    map<string, int> m;
    for(string x: v) m[x]++;
    int n, ans=0;
    string s;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s;
        if(m[s]==1)ans++;
    }
    cout<<ans;
    return 0;
}
