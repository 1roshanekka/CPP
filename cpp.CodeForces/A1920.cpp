#include<bits/stdc++.h>
    using namespace std;

    int there(int start, int stop, vector<int> v){
        int count =0;
        // for (int i = 0; i < v.size(); ++i)
        // {
        //     for (int j = start; j <= stop; ++j)
        //     {
        //         if(v[i]==j){
        //             count++;
        //         }
        //     }
        // }
        for (int i = 0; i < v.size(); i++)
        {
            if(start<=v[i] && v[i]<=stop){ //(start<=v[i]<=stop) is not correct in C++ , its only valid in python
                // cout<<v[i]<<" ";                    
                count++;
                // cout<<"\n";
            }
        }
        return count;
    }


    void solve() {
        int n;cin>>n;
        int count =0;
        int start=1, stop=1e9+1;
        vector<int> v;
        for (int i = 0; i < n; ++i)
        {
            int a,x;
            cin>>a>>x;

            if(a==1){
                if(x>=start){
                    start = x;
                }
            }
            else if (a==2){
                if(x<=stop){
                    stop = x;
                }
            }
            else if(a==3){ // what if the excluded is in the start or stop // considering its not there
                v.push_back(x);
            }
            
            // a = 1 then 𝑘 must be greater than or equal to some integer 𝑥;
            // a = 2 then 𝑘 must be less than or equal to some integer 𝑥;
            // a = 3 then 𝑘 must be not equal to some integer 𝑥;

        }
        // cout<<start<<" "<<stop<<endl;

        int initial = stop-start+1;
        int minus = there(start, stop, v);
        int ans = (initial - minus);
        if(ans<0){
            ans =0;
        }
        // cout<<initial<<" "<<minus<<" "<<ans<<"\n"<<endl;
        cout<<ans<<endl;
        // for (int i = start; i <= stop; ++i)
        // {   
        //     if(there(i, v)){
        //         // cout<<i<<" ";
        //         count +=1;
        //     }
        // }


        // cout<<"\n";
        // cout<< count << endl;


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