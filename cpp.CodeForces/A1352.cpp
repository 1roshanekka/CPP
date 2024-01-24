#include<bits/stdc++.h>
using namespace std;

    void solve() {
        int n; cin>>n;
        // cout << n;
        int x = n;
        //digits
        int digits=0;

        while(x>0){
            x = x/10;
            digits +=1;
        }

        // cout << "digits : " <<digits << endl;

        int a =n;
        int i=0;
        int count=0;
        int arr[digits];
        int j=0;
        while(digits>0){
            if( ((a%10)*pow(10,i)) !=0 ){
                // cout << (a%10)*pow(10,i)<< " " ;
                count++;
                arr[j]=(a%10)*pow(10,i);
                j++;
                // cout << a%10 <<"*"<< pow(10,i)<< "\n";    
            }
            a = a/10;
            digits--;
            i++;
        }

        cout<< count<<endl;
        for (int i = 0; i < j; ++i)
        {
            cout << arr[i] << " ";
        }
        // while(x>0){ // or equal to 0
        //     cout << int(x/10) << "a";
        //     x = x%10;
        // }   

        cout<<"\n";
        // cout << nos << digits << endl;

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