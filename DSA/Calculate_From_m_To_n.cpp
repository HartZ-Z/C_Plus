#include <iostream>

using namespace std;

class Calculate
{
private:
  int m , n , sum = 0 ;
public:

  void get_data () {
    cout << "Enter the value of m : "; cin>> m;
    cout << "Enter the value of n : "; cin>> n;
    for (int i = m ; i<=n ; i++){
      sum += i;
    }

}
  void display () {
    cout<< " The sum of m: "<<m<< " To n: "<<n<< " is : "<< sum << endl;
  }
};

int main () {
  Calculate c;
  c.get_data();
  c.display();
}