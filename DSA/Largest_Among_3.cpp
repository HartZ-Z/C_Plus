#include <iostream>
using namespace std;

int main() {
  int a , b , c;

  cout<<"Enter first number: ";
  cin>>a;

  cout<< "\nEnter second number: ";
  cin>>b;

  cout<< "\nEnter third number: ";
  cin>>c;

  if (a > b and a > c)
  {
    cout<< "\nFirst number is the largest : "<<a;
  }
  if (b > a and b > c)
  {
    cout<< "\nSecond number is the largest : "<<b;
  }
  else
  {
    cout<< "\n Third number is the largest : "<<c <<endl;
  }
}