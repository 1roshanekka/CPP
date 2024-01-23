#include<bits/stdc++.h>
    using namespace std;
    
    void solve() {
        // int a,b,c,d;
        // cin>> a>>b>>c>>d;


        int arr[4];

        for (int i = 0; i < 4; ++i)
        {
            int x;
            cin >>x;
            arr[i] = x;
        }

        // int dummy[4];
        // for (int i = 0; i < 4; ++i)
        // {
        //     dummy[i] = arr[i];
        // }


        // sort(dummy, dummy+4); //ascending

        // cout<< dummy[3];
        // for (int i = 0; i < 4; ++i)
        // {
        //     /* code */
        //     cout << arr[i] << " ";
        // }
        int count=0;

        for (int i = 0; i < 4; i++)
        {   
            if(arr[i]!=arr[0]){
                if(arr[i]>=arr[0]){
                    count+=1;
                } 
            }
        }
        cout << count << endl;



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