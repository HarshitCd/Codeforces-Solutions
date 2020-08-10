#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, secs, k=0, j=1;
    string s;
    cin>>n>>secs>>s;
    for(int i=0; i<n; i++){
        j=i+1;
        while(s[j]!='G' || s[j]!='\0') j++;
        if(s[j]=='\0') break;
        k=j-i;
        if(k>secs){
            swap(s[j-secs], s[j]);
            break;
        }
        swap(s[i], s[j]);
        secs-=k;
    }
    cout<<s;
    return 0;
}
