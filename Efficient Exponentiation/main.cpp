#include <iostream>
#include <string>

using namespace std;

long long pow(long long m, int n);

int main() {

  string m, n;
  cout << "---Efficient Exponentiation---" << endl;
  cout << "Base: ";
  getline (std::cin, m);
  cout << "Power: ";
  getline (std::cin, n);
  cout << m << "^" << n << "= " << pow(stoi(m), stoi(n));

}

long long pow(long long m, int n) {

    if( n == 0 )
        return 1;
    if( n == 1 )
        return m;
    if( n % 2 == 0)
        return pow( m * m, n / 2);
    else
        return pow( m * m, n / 2) * m;

}
