#include <bits/stdc++.h>
using namespace std;
const long long int mod = 1e9+7;
#define int long long


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout<<"Hello World\n";
    vector<int>arr={1,5,3};
    int sum=0;
    int n=arr.size();
    for(auto it:arr)sum+=it;
    vector<vector<bool>>dp(n+1,vector<bool>(sum+1));
    for(int i=0;i<=n;i++)dp[i][0]=true;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=sum;j++){
            if(j-arr[i-1]<0){
                dp[i][j]=dp[i-1][j];
            }
            else{

                dp[i][j]=dp[i-1][j] || dp[i-1][j-arr[i-1]];
            }
        }
    }
    for(int i=0;i<=sum;i++)
    if(dp[n][i]){

        cout<<i<<" ";
    }
}
