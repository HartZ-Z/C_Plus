#include <iostream>
using namespace std;

int main (){
  int n;
  cout<<"\n Enter the number of rows: "; cin>> n;

  for (int i=n; i>=1; i--){
    for (int j=1; j<=i; j++){
     int k=n;
      if (i==n || j==1 || i==j ) 
      {
        cout<<" * ";
          
      }
      else
        cout<<"   ";
      
    }
    cout<<endl;
  }
  

  return 0;

}