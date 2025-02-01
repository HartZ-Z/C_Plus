#include <iostream>
using namespace std;

class calculate {
    private:
        int r;
        int area;
        int circumference;
    public:
        void get_data (){
            cout<<"\n Enter radius of the circle: ";
            cin>>r;
        }
        void get_area (){
            area = 3.14*r*r;
            cout<<"\n Area of circle : "<<area;
        } 
        void get_circumference(){
            circumference = 2 * 3.14 * r;
            cout<<"\n Circumference of circle : "<<circumference;
        }  
};   

int main (){
    calculate c;
    c.get_data();
    c.get_area();
    c.get_circumference();
    return 0;
}