#include <iostream>

using namespace std;

int main () {
  int n,i;
  int count=0;

  cout << "Enter a number you want to check is prime or not: ";
  cin >> n;

  if (n <= 1) {
    cout << n << " is not a prime number." << endl;
    return 0;
  }
    
  else{
    for (i = 1; i <= n ; i++) {
      if (n % i == 0)
        count++;
  }

  if (count > 2) {
    cout << n << " is Not prime number." << endl;
  } else {
    cout << n << " is  a prime number." << endl;
  }

  return 0;
}
}
