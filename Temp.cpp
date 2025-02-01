#include <iostream>
using namespace std;

class converter {
  private:
  float celcius;
  float fehrenheit;
  public:
    void get_data(){
      cout<<"\n Enter you temperature in celcius: ";
      cin>>celcius;
    }

    void change (){
      fehrenheit = (celcius * 9/5) + 32;
      cout<<"\n Your temperate in fehrenheit: "<<fehrenheit;
    }
};

int main (){
  converter c;
  c.get_data();
  c.change();
}