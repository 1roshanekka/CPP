#include<bits/stdc++.h>
    using namespace std;
    
    void solve() {
        int arr[4][2]; // corners coordi
        for (int i = 0; i < 4; ++i)
        {      
            int x,y;
            cin>>x>>y;
            arr[i][0] = x;
            arr[i][1] = y;
        }

        int first = arr[1][0];
        int storeFirst;

        for (int i = 1; i < 4; ++i)
        {
            if(first!=arr[i][0]){
                storeFirst = i; //it doesnt repeat count of itself
            }
        }

        int side = abs( arr[storeFirst][0] - arr[1][0] );

        int sq = side*side;
        cout << sq << endl;

        // checking for proper arr input

        // for (int i = 0; i < 4; ++i)
        // {
        //     cout<<arr[i][0]<<" "<<arr[i][1]<<endl;
        // }

        // for (int i = 0; i < 4; ++i)
        // {
        //     for (int j = 0; j < 4; ++j)
        //     {
        //         if(arr[j][0]==arr[i][0]){
        //             int zz = arr[j][0];
        //             break;
        //         }
        //     }
        // }

        // instead of matching take one point and find two matches

        //checking whole line
        // we know its square so other side will match

        //so this is useless caluclation
        // int first = arr[1][0];
        // int storeFirst;
        // int match =0;
        // for (int i = 1; i < 4; ++i)
        // {
        //     if(first==arr[i][0]){
        //         storeFirst = i; //it doesnt repeat count of itself
        //         match++;
        //     }
        // }

        // if(match==2){

        //     int line1 = abs(arr[storeFirst][1]-arr[1][1]);

        // }
        // else {// look match in y axis
        //     int second = arr[1][1];
        //     int match=0;

        //     for (int i = 0; i < 4; ++i)
        //     {
        //         if(first==arr[i][1]){
        //             match++;
        //         }
        //     }

        //     if(match==2){

        //     }
        //     else{
        //         cout<<"invalid"<<endl;
        //         // break; // should you keep this , its not inside loop
        //     }


        // }
        //make sure the y coordi of matched x doesn't match

        //it will definitely not match considering its a square



        //we get the matching coordi in zz from all x points

        //what if matching points are in y axis


        // cout<<endl;


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