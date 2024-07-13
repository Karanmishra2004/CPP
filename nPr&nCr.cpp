/*

formula

 nCr = n! / r! * (n - r)!

 P(n,r)=n!(n−r)!


*/


#include<iostream>
using namespace std;
int nCr(int n , int r);
int factorial(int n );
int nPr(int n , int r);

int main(){
 int n = 5;
 int r =2;

 cout << " The nCr value of n = " << n << " and r = " << r << " is " << nCr(n,r) << endl;
 cout << " The nPr value of n = " << n << " and r = " << r << " is " << nPr(n,r) << endl;
}


int nCr(int n , int r){
    int nCr = factorial(n)/(factorial(r)*factorial(n-r));
    return nCr;
}

int factorial(int n ){
    int fact =1;
    for(int i = 1; i <=n ; i++){
        fact = fact * i;
    }

    return fact;
}

int nPr(int n , int r){
  int nPr = factorial(n)/ factorial(n-r);
  return nPr;

}