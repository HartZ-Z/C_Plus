#include <iostream>
using namespace std;

int main (){
  int a;
  cout<<"Enter the number you want to check: ";
  cin>>a;

  if (a%2 == 0)
  {
    cout<<"Your number: "<< a <<" is EVEN"<<endl;
  }else
  {
    cout<<"Your number: "<< a <<" is ODD"<<endl;
    
  }
  
  
}