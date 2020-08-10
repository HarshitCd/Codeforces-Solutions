#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, w=0, j=0;
    string s;
    cin>>n>>k>>s;
    sort(s.begin(), s.end());
    w+=s[j]-'a'+1;
    k--;
    for(int i=1; i<n && k!=0; i++){
        if(s[i]-s[j]>1){
            w+=s[i]-'a'+1;
            k--;
            j=i;
        }
    }
    if(k==0) cout<<w;
    else cout<<-1;
    return 0;
}

/*
n,k=list(map(int,input().split()))
s=list(map(str,input()))
a=list(sorted(s))

j=0
o=0
lir=0
for i in range(1,len(a)):
    if i==1:
        lir+=(ord(a[0])-96)
    if ord(a[i])-ord(a[j])!=1:
        lir+=(ord(a[i])-96)
        j=i


    if o==k-1:
        break;
if lir==0:
    print(-1)
else:
    print(lir)

*/
