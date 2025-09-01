#include <iostream>
using namespace std;

int main (){
  int n, sum=0;
  cout<<"\n Enter a positive integer: "; cin>> n;

  for (int i=1; i<=n; ++i){
    sum += i;
  }

  cout<<"\n Sum of first "<< n <<" natural numbers is: "<< sum << endl;
  return 0;

}