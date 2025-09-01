#include <iostream>
using namespace std;

int main () {
  int n, i;
  int fact = 1;

  cout << "Enter a number you want to find factorial: "; cin >> n;

  for (i = 1 ; i <= n ; i++) {
    fact = fact * i;
  }
  cout << "\nfactorial of " << n << " is " << fact<<endl; 
}