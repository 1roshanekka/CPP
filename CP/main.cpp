#include<bits/stdc++.h>
    using namespace std;
    
    void solve() {
        int n,m;
        cin>>n>>m;

        int arr[m];

        for (int i = 0; i < m; ++i)
        {
            /* code */
            int x;
            cin>>x;
            arr[i] = x;
        }

        sort(arr, arr+m);
        for (int i = 0; i < m; ++i)
        {
            /* code */
            cout<<arr[i]<<" ";
        }

        int dif=-1;
        for (int j = 0; j < m; ++j)
        {
            /* code */
            for (int i = 0; i < m-1; ++i)
            {
                /* code */
                int a = abs(arr[i]-arr[i+1]);
                if(a>dif){
                    dif = a;
                }
            }
        }
        
        // cout << dif;
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