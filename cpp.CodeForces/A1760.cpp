#include<bits/stdc++.h>
    using namespace std;
    
    void solve() {
        int arr[3];
        for (int i = 0; i < 3; ++i)
        {
            int x;cin>>x;
            arr[i]=x;
        }

        sort(arr, arr+3);

        // for (int i = 0; i < 3; ++i)
        // {
        //     cout << arr[i]<< " ";
        // }
        cout << arr[1] << endl;
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