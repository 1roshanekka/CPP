#include<bits/stdc++.h>
    using namespace std;
    char getLetter(int x){
        if(x==0){
            return 'a';
        }
        else if (x==1)
        {
            return 'b';
        }
        else if (x==2)
        {
            return 'c';
        }
        else if (x==3)
        {
            return 'd';
        }
        else if (x==4)
        {
            return 'e';
        }
        else if (x==5)
        {
            return 'f';
        }
        else if (x==6)
        {
            return 'g';
        }
        else if (x==7)
        {
            return 'h';
        }
        return 'x';
    }
    void solve() {
        string a ;
        cin >> a;
        // cout<<a<<"----"<<endl;
        // D5 
        // means all D and except 5 all numbers
        // and fixed number and all letter excpet d

        // int arr[8][8]; // [D][5] or [4][5]
        int x;
        if(a[0]=='a'){
            x=0;
        }
        else if (a[0]=='b')
        {
            x=1;
        }
        else if (a[0]=='c')
        {
            x=2;
        }
        else if (a[0]=='d')
        {
            x=3;
        }
        else if (a[0]=='e')
        {
            x=4;
        }
        else if (a[0]=='f')
        {
            x=5;
        }
        else if (a[0]=='g')
        {
            x=6;
        }
        else if (a[0]=='h')
        {
            x=7;
        }

        // int z;
        // z = a[1]);
        // cout<<z;


        // cout<<z<<"eee";
        // cout<<typeid(int(a[1])).name()<<endl;
        for (int i = 0; i < 8; ++i)
        {   
            if(x==i){ // print all d part except the number 
                for (int j=1; j <=8; ++j)
                {     
                    if(j!= a[1]-'0'){
                        cout<<getLetter(i)<<j<<endl;    
                    }
                }
            }
            else{
                //fix a[1] and vary letters
                cout<<getLetter(i)<<a[1]<<endl;
            }

        }

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