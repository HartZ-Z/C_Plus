#include <iostream>
using namespace std;
class cube {
  private:
    int n,s;
  public:

    void get_data(){
      cout<<"\n Enter the number you want to find the cube of: ";
      cin>>n;
    }

    void getcube(){
      s=n*n*n;
      cout<<"\n Cube of the number " <<n<< " is " <<s;
    }
};

int main (){
  cube c;
  c.get_data();
  c.getcube();
}