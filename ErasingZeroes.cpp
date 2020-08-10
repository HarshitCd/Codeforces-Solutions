#include<bits/stdc++.h>
#include<string>
using namespace std;

int Erasing_Zeroes(string& s){
    int ans=0, n=0;
    int i=1, len=s.size();
    char c=s[0];
    if(len==0) return 0;
    while(s[i]!='\0'){
        if(c=='1' && s[i]=='0'){
            n++;
            //cout<<"Incremented n when i = "<<i<<endl;
        }
        else{
            ans+=n;
            n=0;
            c=s[i];
        }
        i++;
    }
    return ans;
}

int main(){
    int t;
    string s;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>s;
        cout<<Erasing_Zeroes(s)<<endl;
    }
    return 0;
}
