#include<bits/stdc++.h>
    using namespace std;
    
    void solve() {
        int x,y,n;
        cin>>x>>y>>n;

        int ans=0;
        for (int i = n; i >0; i--)
        {
            if(i%x==y){
                // if(i>ans){
                //     ans = i;
                // }
                // else{

                // }
                ans = i;
                break;
            }
        }
        cout<<ans<<endl;

    }

    signed main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

            int _t;
            cin >> _t;
            while(_t--) {
                solve();
            }
    }