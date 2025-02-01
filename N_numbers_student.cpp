#include <iostream>
using namespace std; 

class student {

    private:

        int rno;
        char name[30];

    public:

        void get_data(){
            cout<<"\n Enter Roll no of the student: ";
            cin>>rno;
            cout<<"\n Enter name of the student: ";
            cin>>name;
        }

        void display(){
            cout<<"\n Roll no of the student: "<<rno;
            cout<<"\n Name of the student: "<<name;
        }
    
};

int main () {
    int n,i;
    cout<<"\n Enter number of records you want to add: ";
    cin>>n;
    student s[n];

    for (i=0;i<n;i++){
        cout<<"\n Enter record for student: "<<i+1;
        s[i].get_data();
    }

    for (i=0;i<n;i++){
        cout<<"\n Record of student: "<<i+1;
        s[i].display();
    }
}