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

        int diff;
        int ans=0
        for (int i = 0; i < m; ++i)
        {
            int check = arr[i];
            for (int j = 0; j < m; ++j)
            {
                if(check!=arr[j]){
                    if(abs(check-arr[j]) > 0){
                        diff = abs(check-arr[j])
                    }
                    else{

                    }
                }
                
            }
            if()
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