#include<bits/stdc++.h>
    using namespace std;
    
    void solve() {
        int a,b,c;
        cin>>a>>b>>c;

        if(a==b){
            cout<<c<<endl;
        }
        else if(b==c){
            cout<<a<<endl;
        }
        else{
            cout<<b<<endl;
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