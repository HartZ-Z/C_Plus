#include <iostream>

using namespace std;

class avg {
private:
  int n , sum = 0 ;
  float avg;

public:
  void get_data () {
    cout << "Enter the number you want the avg till :"; cin>> n;
    for (int i = 1 ; i<=n ; i++){
      sum += i;
    }
  }
  void display () {
    avg = sum/n;
    cout<< " The avg of n: "<<n<< " is : "<< avg << endl;
  }
};

int main () {
  avg a ;
  a.get_data();
  a.display();
  return 0 ;

}
