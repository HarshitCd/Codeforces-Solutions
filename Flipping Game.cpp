#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(vector<int>& a, int n)
{
    int max_so_far = -1, max_ending_here = 0;

    for (int i = 0; i < n; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

int main(){
    int n, j=1, i, s=0;
    cin>>n;
    vector<int> v(n), u;
    for(i=0; i<n; i++) cin>>v[i];
    i=0;
    while(i<n){
        while(i+j<n && v[i]==v[i+j]) j++;
        if(v[i]==1){s+=j; j*=-1;}
        i+=abs(j);
        u.push_back(j);
        j=1;
    }
    cout<<s+maxSubArraySum(u, u.size());
    return 0;
}
