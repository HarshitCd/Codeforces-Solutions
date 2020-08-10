#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, ans=0;
    vector<int> arr(26);
    string s;
    cin>>n>>s;

    for(int i=0; i<s.size(); i++){
        if(i%2==0) arr[s[i]-'a']++;
        else{
            if(arr[s[i]-'A']==0) ans++;
            else arr[s[i]-'A']--;
            //cout<<s[i]-'A'<<" "<<arr[s[i]-'A']<<endl;
        }
    }
    cout<<ans;
    return 0;
}
