#include<bits/stdc++.h>
    using namespace std;
    
    void solve() {
        int arr[4];
        for (int i = 0; i < 4; ++i)
        {
            int x;cin>>x;
            arr[i] = x;
        }

        int check[4];

        for (int i = 0; i < 4; ++i) {
            check[i] = arr[i];
        }

        for (int i = 0; i < 4; ++i)
        {
            /* code */
            for (int j = 0; j < 3; ++j)
            {
                int rep = check[j+1];
                if(check[j]>check[j+1]){
                    check[j+1] = check[j];
                    check[j] = rep;
                }
            }
        }

        int first = check[3];
        int second = check[2];

        // for (int i = 0; i < 4; ++i)
        // {
        //     /* code */
        //     cout << arr[i];
        // }
        // cout << '\n';
        // for (int i = 0; i < 4; ++i)
        // {
        //     /* code */
        //     cout << check[i];
        // }

        int flag =0;
        int ax[4];

        for (int i = 0; i < 4; ++i)
        {
            if(arr[i]==first || arr[i]==second){
                ax[i] = 1;
            }
            else{
                ax[i] = 0;
            }
        }

        // for (int i = 0; i < 4; ++i)
        // {
        //     cout <<ax[i];
        // }
        int sum=0;
        for (int i = 0; i < 2; ++i)
        {
            sum += ax[i];
            if(sum>1){
                flag = 1;
            }
        }
        if(sum==0){
            flag = 1;
        }


        if(flag!=1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
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