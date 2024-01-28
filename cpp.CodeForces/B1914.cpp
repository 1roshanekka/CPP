#include<bits/stdc++.h>
    using namespace std;
    
    void solve() {
        int n,k; cin>>n>>k;

        // get excited two times
        if(k==0){
            for (int i = n; i >=1; i--){
                cout<< i << " ";
            }
        }
        else{
            for (int i=1; i<=k; ++i)
            {
                cout << i << " ";
            }
            for (int j=n; j>k; j--)
            {
                cout<<j<< " ";
            }
        }
        cout<<"\n";

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