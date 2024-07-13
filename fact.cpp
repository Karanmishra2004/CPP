#include<iostream>
using namespace std;
 int fact =1;

int factorial( int n );

int main ( ){
    int n = 5;
    // call the funcation 

    cout << " The factorial of the " << n << " is "<< factorial(n) << endl ;

    return 0;
}

int factorial(int n ){

    for(int i = 1; i <=n ; i++){
        fact = fact * i;
    }

    return fact;
}