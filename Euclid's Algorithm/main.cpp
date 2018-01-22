#include <iostream>
#include <string>

using namespace std;

long long gcd(long long m, long long n);

int main() {

  string m, n;
  cout << "---Euclid's Algoritm---" << endl;
  cout << "First Number: ";
  getline (std::cin, m);
  cout << "Second Number: ";
  getline (std::cin, n);
  cout << "Greatest Common Divisor: " << gcd(stoi(m), stoi(n));

}

long long gcd(long long m, long long n) {

    while( n != 0) {
        long long rem = m % n;
        m = n;
        n = rem;
    }
    return m;

}
