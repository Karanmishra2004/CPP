/*
Given an integer n, return true if it is a power of four. Otherwise, return false.

An integer n is a power of four, if there exists an integer x such that n == 4x.

 

Example 1:

Input: n = 16
Output: true
Example 2:

Input: n = 5
Output: false
Example 3:

Input: n = 1
Output: true
 

Constraints:

-231 <= n <= 231 - 1

*/



#include<iostream>
#include<cmath>
using namespace std;
int n = 16 ;
//int ans= 1;

bool isPOwerOfTwo(int n){
     if (n<=0){
        return false;
     }

     if(n==1){
        return true;
     }

    for( int i =0 ; i<=31 ; i++){
       long int  ans = pow(4,i);

        if(ans == n)
        {
            return true;
            //break;
        }
         
    }
    return false ;
}

int main (){
if (isPOwerOfTwo(n)){
    cout << "true" ;
}else{ cout << "nop";}
 return 0;  
}