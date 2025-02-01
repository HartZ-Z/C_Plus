#include <iostream>
using namespace std;

class demo 
{
    private:
        int rno;
        char name[20];
    
    public:
        void get_data (){
            cout<<"\n Enter Roll No: ";
            cin>>rno;
            cout<<"\n Enter Name of the student: ";
            cin>>name;}
        friend void display ( demo & );
};

void display( demo &d){
    cout<<"\n The roll number of the student is: "<<d.rno;
    cout<<"\n The name of the student is: "<<d.name;
}

int main ()
{
    int n; 
    cout<<"\n Enter the no of records you want to add: ";
    cin>>n;
    demo d[n];
    cout<<"\nENTER STUDENT DATA ";
    for (int i=0;i<n;i++){
        cout<<"\n Enter record for student: "<<i+1;
        d[i].get_data();
        
    }
    for (int i=0;i<n;i++){
        cout<<"\n Record for student: "<<i+1;
        display(d[i]);
    }
    
}
    

