#include<bits/stdc++.h>
    using namespace std;
    
    void solve() {
        int t;cin>>t;
        int arr[t];
        for (int i = 0; i < t; ++i)
        {
            /* code */
            int x;cin>>x;
            arr[i] = x;
        }

        for (int i = 0; i < t; ++i)
        {
            /* code */
            for (int j = 0; j < t-1; ++j)
            {
                /* code */
                int rep=arr[j+1];
                if(arr[j]>arr[j+1]){
                    arr[j+1] = arr[j];
                    arr[j] = rep;
                }
            }
        }
        for (int i = 0; i < t; ++i)
        {
            cout<<arr[i]<<" ";
        }
    }

    signed main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

            // int_t;cin >> _t;while(_t--) {
                solve();
            // }
    }