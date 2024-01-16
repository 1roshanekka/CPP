// noob me took 1 hr to solve this shit

#include <bits/stdc++.h>
using namespace std;

void sort(int arr[], int x){ //quick sort
    for (int j = 0; j < x; ++j)
    {
        /* code */
        for (int i = 0; i < x-1; ++i)
        {
            /* code */
            if(arr[i]>=arr[i+1]){
                int replace = arr[i];
                
                arr[i] = arr[i+1];
                arr[i+1] = replace;
                
            }
        }
    }
}
int greed(int arr[], int mid, int t){
    int sum = 0;
    for (int i = mid; i < t; ++i)
        {
            /* code */
            sum += arr[i];
        }
    return sum;
}
int nogreed(int arr[], int mid, int t){
    int sum = 0;
    for (int i = 0; i < mid; ++i)
        {
            /* code */
            sum += arr[i];
        }
    return sum;
}

bool check(int a, int b){
    if(a>b){
        return true;
    }
    else{
        return false;
    }
}
int main() {
    // your code goes here
    int t; 
    cin >> t;

    int arr[100]; // hard code
    for (int i = 0; i < t; ++i)
    {
        /* code */
        int x;
        cin >> x;

        arr[i] = x;
    }

    sort(arr, t);

    // for (int j = 0; j < t; ++j)
    // {
    //     cout<< arr[j] << " ";
    // }

    int ans = -1;
    int lo=0; int hi=t;
    while(lo<hi){
        int mid = (lo + (hi-lo)/2);
        if( check( greed(arr, mid, t), nogreed(arr, mid, t) ) ) {
            ans = mid; // no of coins with greedy
            lo += 1;
        }
        else{
            hi -= 1;
        }
    }
    // cout << "\n" ;
    // cout << ans << endl;
    cout << t-ans ;
}
