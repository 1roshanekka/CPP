#include<bits/stdc++.h>
    using namespace std;
    
    void solve() {
        int n, k, l, c, d, p, nl, np;
        cin>>n>>k>>l>>c>>d>>p>>nl>>np;

        int vol = k*l;

        int toast = vol/nl;

        int limes = c*d;

        // considering inputs are no less than 1
        int salt = p/np;

        // int salts = p;

        // min can be used for comparing 2 values
        int ans = min(min(toast,limes),salt)/n;
        cout << ans;
    }

    signed main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

            // int _t;
            // cin >> _t;
            // while(_t--) {
                solve();
            // }
    }