#include<iostream>
using namespace std;

int main(){

    int n= 10;

    int a =0;
    int b = 1;
    int c =0 ;

    for(int i= 1; i<=n;i++){
        c=a+b;
        cout << "" << c << " ";
        a=b;
        b=c;
    }

    return 0;
}