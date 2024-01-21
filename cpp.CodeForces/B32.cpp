#include<bits/stdc++.h>
    using namespace std;
    
    void solve() {
        string x;
        cin >> x;
        // for (int i = 0; i < x.length(); ++i)
        // {
        //     cout<<x[i];
        // }

        int dash = 0, dot=0;
        if(1==0){ //even



        }
        else {//odd
            for (int i = 0; i < x.length(); i++)
            {   
                if(x[i]=='-'){
                    if(x[i+1]=='-'){
                        cout<<2;
                        i+=1;
                    }
                    else if(x[i+1]=='.'){
                        cout << 1;
                        i+=1;
                    }
                }
                else{
                    cout <<0;
                }
            }

        }
        // for (int i = 0; i < x.length(); ++i)
        //     {
        //         if(x[i]=='-'){
        //             dash+=1;
        //         }
        //         else if(x[i]=='.'){
        //             dot+=1;
        //         }
        //     }
        // cout<<dash<<" "<<dot;

        // for (int i = 0; i < (x.length()-1); i++)
        //  {
        //     if ( x[i]=='-' && x[i+1]=='.' ) {
        //         cout << 2 ;
        //     }
        //     else if ( x[i]=='-' && x[i+1]=='-' ){
        //         cout << 3;
        //     }
        // }
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