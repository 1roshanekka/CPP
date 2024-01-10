#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    for(int i=0; i<t; i++) {
        int n,x;
        cin >> n;
        cin >> x;
        // cout << n << x << endl;
        string str;
        cin >> str;
        int acc=0;
        int renew=0;
        int flag = 0;
        int sw=0;
        // cout << str << endl;
        // cout << str[0] << endl;
        for(int j=0 ;j<n;j++){
            // cout << str[j] << endl;
            if(str[j]=='0') {
                sw--;
            }
            else {
                sw=x;
            }
            if(sw<0)
            {
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
        
}