#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int n;
    cin >> n;

    for(int i=0 ; i<n ; i++) {
        string x;
        cin >> x;
        
        // extracting such that string stores as char s in array
        int sum1 = 0;
        for(int i=0 ;i<3; i++) {
            sum1 = sum1+(int)x[i]; //this is explicit type casting, it may lead to memory loss
        }
        int sum2 = 0;
        for(int i=3 ; i<6;i++) {
            sum2 = sum2+(int)x[i];
        }
        if (sum1==sum2) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}
