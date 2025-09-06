#include <iostream>
using namespace std;

class Even {
private:
    int n = 200 , i , count = 0 , sum = 0 ;
public:
    
    void even_numbers () {
        for (i = 1 ; i <= n ; i++){
            if (i % 2 == 0){
                sum += i;
                count++;
            }
        }
        cout << "\nEven numbers betwwnn 1 and 200 are : "<<count<<"\nAnd their sum is : "<<sum<<endl;
    }
};

int main (){
    Even e;
    e.even_numbers();
    return 0 ;
}