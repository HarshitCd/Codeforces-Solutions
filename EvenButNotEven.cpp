#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int j=0; j<t; j++){
        int s, a, c=0, i=0;
        string num;
        cin>>s>>num;
        while(num[i]!='\0' && c!=2){
            if((num[i]-'0')%2==1) c++;
            i++;
        }
        if(c>1){
            i=c=0;
            while(c!=2){
                if((num[i]-'0')%2==1){
                    cout<<num[i];
                    c++;
                }
                i++;
            }
            cout<<"\n";
        }
        else cout<<"-1\n";
    }
    return 0;
}
