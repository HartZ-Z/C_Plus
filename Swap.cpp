#include <iostream>
using namespace std;
class def;
class abc {
    private:
        int a;
    public:
        void get_data() {
            cout<<"\n Enter your first number: ";
            cin>>a; 
            cout<<" Your number before swapping: "<<a;
        }
        
        friend void swap (abc&, def&);

        void display () {
            cout<< "\n Your  First Number:"<<a;
        }


};

class def {
    private: 
        int b;
    public:
        void get_data(){
            cout<<"\n Enter your second number: ";
            cin>>b;
            cout<<" Your number before swapping: "<<b;        
        }
        friend void swap ( abc& , def& );

        void display () {
            cout<< "\n Your  Second Number: "<<b;
        }

};

 

void swap (abc &t , def &v ){
    int temp;
    temp = v.b;
    v.b = t.a;
    t.a = temp;

}


int main (){
    abc t;
    def v;
    t.get_data();
    v.get_data();
    swap(t,v);

    cout << "\n After swaping: ";
    t.display();
    v.display();
}

