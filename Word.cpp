#include<bits/stdc++.h>
using namespace std;

void convert(string& s){
    int i, c=0;
    for(i=0; s[i]!='\0'; i++){
        if(s[i]>='a' && s[i]<='z') c++;
    }
    if(c>=i-c) transform(s.begin(), s.end(), s.begin(), ::tolower);
    else transform(s.begin(), s.end(), s.begin(), ::toupper);
}

int main(){
    string s;
    cin>>s;
    convert(s);
    cout<<s;
    return 0;
}
