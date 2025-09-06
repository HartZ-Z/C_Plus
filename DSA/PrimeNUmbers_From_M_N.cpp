#include <iostream>

using namespace std;

class Prime {
  private:
    int i , m  , n;
  public:
    void get_data(){
      cout<<"Enter the value of n : "; cin>>n;
      cout<<"Enter the value of m : "; cin>>m;
    }
    void check_prime(){
      for (i = n ; i <= m ; i++){
        if (n % i == 0 ){
          cout<<i <<" ";
        }
      }
    }
  };

int main () {
  Prime p;
  p.get_data();
  p.check_prime();
  return 0 ;
}