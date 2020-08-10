/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin>>s>>t;
    int n = s.size(), c=0, i, a=0;
    for(i=0; i<n; i++){
        if(s[i]==t[i]) c++;
        s[i]=(s[i]=='0')?'1':'0';
    }
    for(int i=0; i<n; i++){
        if(s[i]!=t[i]) {
            c++;
            if(c%2==0) s[i]=t[i];
        }
    }
    if(n%2==1) cout<<"impossible";
    else cout<<s;
    return 0;
}
*/


#include <iostream>
using namespace std;

int main()
{
    string s, t, p;
    cin >> s >> t;
    int c(0);

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == t[i])
            p += s[i];
        else
        {
            c++;
            if (c % 2 == 1)
                p += s[i];
            else
                p += t[i];
        }
    }

    if (c % 2 == 1)
        cout << "impossible" << endl;
    else
        cout << p << endl;
    return 0;
}
