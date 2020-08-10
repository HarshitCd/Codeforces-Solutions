#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;cin>>t;
    for(long long int z=0;z<t;z++)
    {
      long long int a,b,c,n;cin>>a>>b>>c>>n;
      if(a>b && a>c)
      {b=a-b;c=a-c;a=0;}
      else if(b>a && b>c)
      {a=b-a;c=b-c;b=0;}
      else
      {a=c-a;b=c-b;c=0;}
      n-=(a+b+c);
      if(n%3==0 && n>=0){cout<<"YES\n";}
      else{cout<<"NO\n";}
    }
}

/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        vector<int> v(3, 0);
        int n;
        cin>>v[0]>>v[1]>>v[2]>>n;
        sort(v.begin(), v.end());
        int a  = 2*v[2]-v[1]-v[0];
        if(a<=n && (n-a)%3==0) cout<<"YES\n";
        else cout<<"NO\n";

    }
    return 0;
}*/

