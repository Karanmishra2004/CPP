#include<iostream>
#include<math.h>
using namespace std;


int main() {

    int n = 12;
   // cin >> n;


    int ans  = 0;
    int i = 0;
    while(n != 0 ) {

        int bit  = n % 2;
        // cout << bit; // only for debuging 

        ans = (bit * pow(10, i) ) + ans;

        n = n >> 1;
        i++;

    }

    cout<<" Answer is " << ans << endl;
    return 0;
}