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

int countPrimes(int n) {
  int count = 0;
  for (int i = 2; i < n; i++) {
    if (isPrime(i)) {
      count++;
    }
  }
  return count;
}

int main() {
  int n = 10;
  cout << "Number of primes less than " << n << ": " << countPrimes(n) << endl;
  return 0;
}
