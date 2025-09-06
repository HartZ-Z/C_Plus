#include <iostream>

using namespace std;

int main (){
  int t1 = 0 , t2 =1 ,next_term =0 , sum = 0, n ,i ;
  cout << "Enter the numbers of terms : "; cin>> n;

  for (i = 1 ; i <= n ; i++){
    cout <<t1<<endl;
    next_term = t1 + t2 ;
    t1 = t2 ;
    t2 = next_term;
    sum += next_term - t1;
  }
  cout << "The sum of fibonacci series is : "<< sum << endl;
}