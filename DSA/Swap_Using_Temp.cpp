#include <iostream>
using namespace std;

int main (){
  int a,b;

  cout <<"Enter 1st number :";
  cin >> a;
  cout <<"Enter 2nd number :";
  cin >> b;

  cout <<"Before swappng a = "<< a <<" ,b = "<<b;

  int temp ; 

  temp = a ;
  a = b; 
  b = temp;

  cout <<"\nAfter swappng a = "<< a <<" ,b = "<<b<<endl;

}
