#include<bits/stdc++.h>
    using namespace std;
    
    void solve() {
        int n;cin >> n;
        int arr[n];
        int dummyarr[n];
        for (int i = 0; i < n; ++i)
        {
            int x; cin>>x;

            arr[i]=x;
            dummyarr[i]=x;
        }
        // if ((arr.length())>2){ 
        if(n>2){
            sort(dummyarr, dummyarr+n);
            // for (int i = 0; i < n; ++i)
            // {
            //     cout << arr[i]<< " ";
            // }

            int max = dummyarr[n-1];
            int second= dummyarr[n-2];
            // cout<<max<<" "<<second<<" ";

            for (int i = 0; i < n; ++i)
            {
                if(arr[i]!=max){
                    // cout<<arr[i]<<"-"<<max<<"=";
                    cout<< arr[i]-max<<" ";    
                }
                else if(arr[i]==max){
                    cout<<arr[i]-second<< " ";
                }
            }
        }

        else {
            cout<<arr[0]-arr[1]<< " ";
            cout<<arr[1]-arr[0];
        }
        cout<<'\n';

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