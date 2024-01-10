#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int n,k;
    int time=0;
    int tot = 239;
    int probs = 0;
    cin >> n >> k;
    for(int i=1; i<n+1;i++){
        time += 5*i;
        int timeleft = tot - time;
        cout << timeleft << endl;
        if ( timeleft >= k) {
            probs = i;
        }
    }
    cout << probs << endl;
}
