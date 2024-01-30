#include<bits/stdc++.h>
    using namespace std;

    void solve() {
        int n; cin>>n;

        int initial = 1, flag=0;
        //want to have n candies
        // int count=0;

        // if(n%2==0){ //cant have even numbers
        //     cout << -1 << endl;
        // }
        // else{
        //     // initially we have 1 candy
        //     // it gives 1 on and on so use method 2
        //     initial = second(initial);
        // }
        vector<int> v;
        while(n!=1){
            if(n%2==0){
                flag =1;
                break;
            }
            else{
                int temp1 = (n+1)/2;
                int temp2 = (n-1)/2;

                if( (temp1%2==0) && (temp2%2==0) ){
                    flag=1;
                    break;
                }
                else if(temp1%2!=0){
                    n = temp1;
                    v.push_back(1);
                    // cout << 1 << " ";
                }
                else{
                    n= temp2;
                    v.push_back(2);
                    // cout << 2 << " ";
                }
            }
        }
        if(flag!=1){
            cout<< v.size() <<endl;
            for (int i = v.size()-1; i >=0; i--)
            {
                cout << v[i] << " ";
            }
            cout << "\n";
        }
        else{
            cout << -1 << endl;
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