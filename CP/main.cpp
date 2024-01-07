#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int n,m;
    cin >> n;
    cin >> m;
    int flag = 0;
    for(int i=1; i<=n ; i++) {
        if(i%2!=0) { // odd line
            for(int i=1; i<=m ; i++) {
                cout << "#";
            }
            cout << endl;
        }
        else {
            if(flag==0) { // end #
                flag=1;
                for(int i=1; i<m ; i++) {
                    cout << ".";
                }
                cout << "#" << endl;
            }
            else if (flag==1) { // # start
                flag=0;
                cout << "#";
                for(int i=1; i<m ; i++) {
                    cout << ".";
                }
                cout << endl;
                
            }
            
        }
    }
}
    