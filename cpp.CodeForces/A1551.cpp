#include<bits/stdc++.h>
    using namespace std;
    
    void solve() {
        int n;
        cin>>n;
        // imp
        std::cout << std::fixed;
        
        if(n%2==0){ //even ||  1:2 ka split

            double a = (1.0/3)*n;
            double b = (2.0/3)*n;
            // cout << a << "|" << b  << endl;
            // float a = (1/3)*n; // doesnt work as its int (1/3)
            // float b = (2/3)*n;
            int x = floor(a);
            int z = ceil(b/2);
            

            if(x+2*z==n){
                // cout << "g"<<" ";
                cout << x << " " << z << endl;   
            }
            else{
                cout << z << " " << x << endl;
            }

            // cout << int(floor(a)) << " " << int(ceil(b/2)) << endl;

            // if ((int(a) == a) && (int(b) == b)) {
            //     // cout << "Both numbers are integers: " << a << " " << b << endl;
            //     cout <<setprecision (19)<< (a) << " " << (b/2) << "dd"<< endl;
            // } else {
            //     // cout << "At least one of the numbers has a decimal part." << endl;
            //     cout << int(floor(a)) << " " << int(ceil(b/2)) << endl;

            // }
        }
        else{ // odd || 
            float a = (1.0/3)*n;
            float b = (2.0/3)*n;
            int x = floor(a);
            int z = ceil(b/2);

            if(x+2*z==n){
                // cout << "g"<<" ";
                cout << x << " " << z << endl;   
            }
            else{
                cout << z << " " << x << endl;
            }
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