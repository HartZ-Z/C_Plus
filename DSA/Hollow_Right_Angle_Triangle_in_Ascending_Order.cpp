#include <iostream>
using namespace std;

int main () {
  int n;
  cout<<"Enter number of rows: ";
  cin>>n;

  for (int i = 1; i <=n ; i++) {
    int k = 1;
    for (int j = 1; j <= i ; j ++){
      if (j==1 || j==i || i==n){
        cout<<k << "";
      }
      else 
        cout<<" ";
      k++;
    }
    cout<<endl;
  }
}


