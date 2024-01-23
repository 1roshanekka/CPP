#include<bits/stdc++.h>
    using namespace std;
    
    void solve() {

        int k,r;
        cin >> k >> r;

        int count = 1;
        int div = k-r;

        while ( div%10!=0 ){

            if((k*count)%10==0){
                break;
            }
            else{
                count +=1;
                div = (k*count)-r;
                // cout << div << " " << r << " " << count<<"\n";
                
            }

            // cout << div<< " ";
            // cout<<count;
        }

        cout << count;
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