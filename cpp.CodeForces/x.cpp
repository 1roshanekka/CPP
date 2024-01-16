#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
void solve(){
    
    long long n,h;
    
    cin>>n>>h;
    
    long long arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);

    int pills[]={2,3,4,6,12};
    int j=0;
    int used=1;
    int pos=-1;
    for(int i=0;i<n;i++){
        while(h<=arr[i]&&j<5){
            int gd=gcd(used,pills[j]);
            pills[j]=pills[j]/gd;
            if(h*pills[j]>arr[i]){
                h*=pills[j];
                h+=arr[i]/2;
                used=pills[j];
                break;
            }
            j++;
        }
        if(j==5&&h<=arr[i]){
            int pos=i;
            break;
        }
    }

    cout<<pos+1<<endl;
}
int main() {
    // your code goes here
    int t;cin>>t;
    while(t--){
        solve();
    }

}
