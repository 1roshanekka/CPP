#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int n,m;
    cin >> n;
    cin >> m;

    for(int i=1; i<=n ; i++) {
        if(i%2!=0) { // odd line
            for(int i=1; i<=m ; i++) {
                cout << "#";
            }
            cout << endl;
        }
        else {
            for(int i=1; i<m ; i++) {
                cout << ".";
            }
            cout << "#" << endl;
        }
    }
}
    