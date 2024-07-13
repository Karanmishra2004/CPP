/*
Given an integer n, return true if it is a power of three. Otherwise, return false.

An integer n is a power of three, if there exists an integer x such that n == 3x.

 

Example 1:

Input: n = 27
Output: true
Explanation: 27 = 33
Example 2:

Input: n = 0
Output: false
Explanation: There is no x where 3x = 0.
Example 3:

Input: n = -1
Output: false
Explanation: There is no x where 3x = (-1).
 

Constraints:

-231 <= n <= 231 - 1


*/



#include<iostream>
#include<cmath>
using namespace std;
int n = 27 ;
//int ans= 1;

bool isPOwerOfTwo(int n){
     if (n<=0){
        return false;
     }

    for( int i =0 ; i<=31 ; i++){
       long int  ans = pow(3,i);

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