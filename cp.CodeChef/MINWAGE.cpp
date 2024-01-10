#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    for(int i =0; i<t; i++) {
        string c;
        cin >> c;
        cout << c.length();
        for(int i =0; i<c.length(); i++) {
            cout << c[i] << endl;
        }
    }

}
