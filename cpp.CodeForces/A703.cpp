#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int n;
    cin >> n;
    int mishka=0;
    int chris=0;
    for(int i=0; i<n; i++) {
        int a,b;   
        cin >> a >> b;
        
        if(a==b) {
            mishka +=1;
            chris += 1;
        }
        else if(a>b){
            mishka += 1;
        }
        else {
            chris +=1;
        }
    }
    // cout << chris << "&" << mishka << endl;
    if(mishka==chris) {
        cout << "Friendship is magic!^^" ;
    }
    else if (mishka>chris) {
        cout << "Mishka" ;
    }
    else {
        cout << "Chris";
    }
   
}
