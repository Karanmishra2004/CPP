#include <iostream>
using namespace std;

    bool isPrime(int num) {
    if (num <= 1) {
        return false; // 1 or less are not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
        return false; // Divisible by a number other than 1 and itself
        }
    }
    return true; // If no divisors found, it's prime
    }

int main() {
  int a = 11;
  if (isPrime(a)) {
    cout << a << " is a prime number" << endl;
  } else {
    cout << a << " is not a prime number" << endl;
  }
  return 0;
}
