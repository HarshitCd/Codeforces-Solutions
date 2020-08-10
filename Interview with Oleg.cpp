#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, j=0, c=0, i=0;
    string s;
    vector<int>v;
    cin>>n>>s;
    while(i<n){
        if(i+2<n && c==0 && s[i]=='o' && s[i+1]=='g' && s[i+2]=='o'){c++; s[i]='*'; s[i+1]='.';s[i+2]='.'; i+=3;}
        else if(c==0) i++;
        else if(i+1<n && c==1 && s[i]=='g' && s[i+1]=='o'){s[i]='.'; s[i+1]='.'; i+=2;}
        else c=0;
    }
    i=0;
    while(i<n){
        if(s[i]=='*'){
            cout<<"***";
            i++;
            while(i<n && s[i]=='.') i++;
        }
        else if(i<n) {cout<<s[i]; i++;}
    }
    return 0;
}


/*
100
ggogogoooggogooggoggogggggogoogoggooooggooggoooggogoooggoggoogggoogoggogggoooggoggoggogggogoogggoooo
gg***oogg***oggoggoggggg******ggooooggooggooogg***ooggoggoogggo***ggogggoooggoggoggoggg***ogggoooo
gg***oogg***oggoggoggggg******ggooooggooggooogg***ooggoggoogggo***ggogggoooggoggoggoggg***ogggoooo
*/
