#include<bits/stdc++.h>
    using namespace std;
    
    void solve() {

        // int n;cin>>n;

        // // int arr[n];
        // int prev=-1;
        // int count=0, max=0;
        // int x=-1;
        // int flag=0;
        // for (int i = 0; i < n; ++i)
        // {
        //     prev = x;
        //     cin>>x;
            
        //     if(i!=0){
        //         if(flag==0){
        //             if( (prev==0 && x==1) || (prev==0 && x==0) ){
        //                 count++;
        //                 max = count;
        //                 if(count>max){
        //                     max = count;
        //                 }
        //             }
        //             else{
        //                 count=0;
        //             }
        //         }
        //     }
        //     else if(x==0){
        //         count++;
        //         max = count;
        //         flag = 1;
        //         // if(count>max){
        //         //         max = count;
        //         //     }
        //     }
            
        // }
        int n;cin>>n;

        int count =0, max=0;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;

            if(x==0){
                count++;
                if(count>max){
                    max=count;    
                }
            }
            else{
                count =0;
            }
        }
        cout<<max<<endl;

    }

    signed main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

            int _t;
            cin >> _t;
            while(_t--) {
                solve();
            }
    }