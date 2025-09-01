#include <iostream>
using namespace std;

int main (){
  int a ;
  cout<<"\n Enter your marks: "; cin>> a;
  if (a>=90 && a<=100)
    cout<<"\n Your grade is A+"<<endl;
  else if (a>=80 && a<90)
    cout<<"\n Your grade is A"<<endl;
  else if (a>=70 && a<80)
    cout<<"\n Your grade is B+"<<endl;
  else if (a>=60 && a<70)
    cout<<"\n Your grade is B"<<endl;
  else if (a>=50 && a<60)
    cout<<"\n Your grade is C"<<endl;
  else if (a>=40 && a<50)
    cout<<"\n Your grade is D"<<endl;
  else if (a>=0 && a<40)
    cout<<"\n Your grade is F"<<endl;
  else
    cout<<"\n Invalid marks entered!";
  return 0;

}