#include<bits/stdc++.h>
    using namespace std;
    
    void solve() {
        int n,m;
        cin>>n>>m;

        int arr[n];
        int flag = 0;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >>x;

            arr[i] = x;
        }
        for (int i = 0; i < n; ++i)
        {
            if( (arr[i]>=m) ){
                flag=1;
            }
            else{
                flag = 0;
                break;
            }
        }
        vector<int> z;
        if(flag == 1){ 
            cout << n<<endl; // all states are literate
        }
        else{
            
            sort(arr, arr+n);
            int a=0;
            for (int i = 0; i < n; ++i)
            {
                if(a<=m){
                        a += arr[i];
                        // cout<<a<<" ";
                    }
                    else if(arr[i]<m){
                        a += arr[i];
                    }
                    else{
                        z.push_back(arr[i]);
                    }
            }
            cout<< z.size()+1<<endl;
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