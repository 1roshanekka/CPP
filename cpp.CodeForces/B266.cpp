#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int n,t;
    cin >> n >> t;

    string x;
    cin >> x;
    string a=x;
    for(int j=0; j<t ; j++) {
        for( int i=0; i<n-1; i++) {
            if(x[i]=='B' && x[i+1]=='G'){
                a[i] = 'G';
                a[i+1] = 'B';
            }
        }
        x = a;
        // cout << a << '\n';
    }
    cout << a << '\n';
    
}
