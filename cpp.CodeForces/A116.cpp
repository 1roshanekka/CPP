#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int n; cin >> n;
    int existing=0;
    int x = existing;
    int a=0;
    int b=0;

    for( int i=0; i<n; i++) {
        cin >> a >> b;
        if(i==0) {
            existing = b;
        }

        existing -= a;
        if(i!=0){
            existing += b;
        }

        if (existing>x) {
            x = existing;
        }

    }
    cout << x ;
}
