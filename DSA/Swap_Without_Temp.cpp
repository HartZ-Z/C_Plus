#include <iostream>

using namespace std;

int main (){

  int a , b;

  cout<<"\n Enter 1st number: ";
  cin>>a;
  cout<<"\n Enter 2nd number: ";
  cin>>b;

  cout << "\n Before swapping: \n a="<<a<<"\n b="<<b;

  a = a + b ;
  b = a - b ;
  a = a - b ;

  cout << "\n After swapping: \n a="<<a<<"\n b="<<b << endl ;

  return 0;

}