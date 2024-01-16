#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    string a; 
    cin >> a;
    int arr[a.length()];
    int flag =0;
    string x;
    int array[a.length()];

    for(int i=0; i<a.length(); i++) {
        if(a[i]=='h' || a[i]=='e' || a[i]=='l'|| a[i]=='o') {
            continue;
        }
        else {
            a[i]='z';
        }
    }
    for(int i=0; i<a.length(); i++) {
        cout << a[i];
    }


    // for(int i=0; i<x.length(); i++) {
    //     if(x[i]=='h') {
    //         arr[i] = 1;
    //         flag = 1;
    //     }
    //     else if(x[i]=='e' && flag==1) {
    //         arr[i] = 1;
    //         flag = 2;
    //     }
    //     else if(x[i]=='l' && flag==2) {
    //         arr[i] = 1;
    //         flag = 3;
    //     }
    //     else if(x[i]=='l' && flag==3) {
    //         arr[i] = 1;
    //         flag = 4;
    //     }
    //     else if(x[i]=='o' && flag==4) {
    //         arr[i] = 1;
    //         flag = 4;
    //     }
    //     else {
    //         arr[i]=0;
    //     }
    // }
    // int res=0;
    // int signal=0;
    // for(int i = 0; i < (x.length()-1); i++) {
    //     // cout << arr[i] << ' ';
    //     if(arr[i]==1 && arr[i+1]==1){
    //         res +=1;
    //         if(res>=4){
    //             signal=1;
    //             break;
    //         }
    //     }
    // }
    // if(signal==1){
    //     cout << "YES";
    // }
    // else {
    //     cout << "NO";
    // }
    
    // cout << arr << '\n';
}
