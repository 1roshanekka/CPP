#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int x; cin >> x;
    int ans=0;

    for(int i=5;i>=1;i--){
        ans+=x/i;
        x=x%i;
    }

    cout<<ans<<"\n";
    
    
}
