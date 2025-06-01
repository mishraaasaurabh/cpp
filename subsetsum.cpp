#include <bits/stdc++.h>
using namespace std;
const long long int mod = 1e9+7;
#define int long long


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout<<"Hello World\n";
    vector<int>v={6, 6, 6, 3, 8,16};
    int sum=0;
    for(auto it:v)sum+=it;
    vector<int>dp(sum+1);
    dp[0]=true;
    for(int i=0;i<v.size();i++){
        vector<int>newdp=dp;
        for(int j=0;j<=sum;j++){
            if(dp[j]){
                if(v[i]+j<=sum)
                newdp[v[i]+j]=true;
            }
        }
        dp=newdp;
    }
    for(int i=0;i<dp.size();i++){
        if(dp[i])cout<<i<<" ";
    }
    cout<<endl;
}