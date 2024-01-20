#include<bits/stdc++.h>
    using namespace std;
    
    int add(int n){

        while(n>0){
            if(n==1){
                return 1;
            }
            else{
                return (n+add(n-1));
            }
        }
        return 0;
    }
    void solve() {
        int n;cin>>n;

        int sum=0;
        int ans=-1;
        for (int i = 1; i < n+1; i++)
        {
            // cout << i << " ";
            // cout<<add(i)<<" :";
            sum += add(i);
            // cout<<sum;
            // cout<<n;
            if(sum<=n){  // true
            //if(n<=sum){  // false

                ans = i;
            }
            else{
                // cout<<"-haha";
                break;
            }
            // cout << ":"<<ans;
            // cout<<" ";
        }
        cout << ans;
    }

    signed main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

            // int_t;
            // cin >> _t;
            // while(_t--) {
                solve();
            // }
    }