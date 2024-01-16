#include <bits/stdc++.h>
using namespace std;

int lucky(int x) {
    string a;
    a = to_string(x);
    int flag = 0;

    for(int i=0; i<a.length() ; i++){
        if(a[i]=='4' || a[i]=='7'){
            flag = 1;
        }
        else{
            flag = 0;
            break;
        }
    }
    return flag;
}
int main() {
    // your code goes here
    int t; cin >> t;
    
    

    int ans =0;
    for(int i=1; i<t+1 ; i++){ // if lucky then by itself it can be divisible
        if(lucky(i)){
            if(t%i==0){
                ans = 1;
                break;
            }
        }
        else{
            ans =0;
        }
    }
    if(ans==1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
