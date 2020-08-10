#include <iostream>
using namespace std;

int main()
{
    string s;
    char u;
    bool c = true;
    cin >> s;

    for(int i = 1; i < s.length(); i++)
    {
        if(islower(s[i]))
        {
            c = false;
        }
    }

    if(c == true)
    {
        for(int j = 0; j < s.length(); j++)
        {
            if(islower(s[j]))
                u = toupper(s[j]);
            else
                u = tolower(s[j]);
            cout << u;
        }
    }
    else
        cout << s;
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.size(), c=0, cc=0;
    for(int i=1; i<n; i++){
        if(s[i]>='a' && s[i]<='z'){
            for(char x: s){
                if(isupper(x)) cout<<(char)tolower(x);
                else cout<<(char)toupper(x);
            }
            return 0;
        }
    }
    cout<<s;
    return 0;
}


*/
